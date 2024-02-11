from utils import *
from sim_executor import *
import os
import random

SEED = 0xdeff
random.seed(SEED)
TEST_CASE_DIR = "merge_test_cases"
ARRAY1_BEGIN_ADDR = 0x1008
ARRAY3_BEGIN_ADDR = 0x1300


def random_merge_test_case():
    lst = random.sample(range(200,400), random.randint(10,15)*2)
    lst1 = lst[:len(lst)//2]
    lst2 = lst[len(lst)//2:]
    lst1.sort()
    lst2.sort()
    lst.sort()
    return (lst1, lst2, lst)

def create_test_file(file_name, implementation, lst1, lst2):
    prologue=""".pos 0x0
init:
    irmovq stack, %rsp
    irmovq array_begin1, %rdi
    irmovq array_end1, %rsi
    irmovq array_begin2, %rdx
    irmovq array_end2, %rcx
    irmovq array_begin3, %r8
    call merge
    halt
"""
    epilogue =""".pos 0x1F00
stack:
.quad 0

"""
    array1_str = y86_asm_array("array_begin1", "array_end1", lst1)
    array2_str = y86_asm_array("array_begin2", "array_end2", lst2)
    with open(file_name, 'w') as f:
        f.write(prologue)
        f.write(implementation)
        f.write(f"\n.pos 0x{ARRAY1_BEGIN_ADDR:04X}\n")
        f.write(array1_str)
        f.write(array2_str)
        f.write(f"\n.pos 0x{ARRAY3_BEGIN_ADDR:04X}\narray_begin3:\n.quad 0\n")
        f.write(epilogue)

if __name__ == "__main__":
    if len(sys.argv) < 5:
        sys.stderr.write("Usage: python3 merge_checker.py {yis, ssim, psim} <path to merge.ys> <path to sim> <path to yas>\n")
        print("Checker incorrectly called.")
        print("Grade: 0")
        sys.exit(1)
    
    could_not_compile = True

    test_cases = [([2], [5], [2,5]),
            ([5], [2], [2,5]),
            ([7,8], [3,10], [3,7,8,10]),
            ([1,4,10], [2,8], [1,2,4,8,10])]
    
    test_cases.extend([random_merge_test_case() for _ in range(26)])
    
    num_test_cases = len(test_cases)
    num_success = 0
    code_abs_path = os.path.abspath(sys.argv[2])
    test_case_dir = os.path.join(os.path.dirname(code_abs_path), TEST_CASE_DIR)
    
    os.makedirs(test_case_dir, exist_ok=True)
    
    try:
        implementation = get_sanitized_code(sys.argv[2])
    except Exception as e:
        sys.stderr.write(f"Could not find start or end of implementation! Keep those comments!\n")
        print("Could not find start or end of implementation.")
        print("Grade: 0")
        sys.exit(1)
    
    for i, (lst1, lst2, lst) in enumerate(test_cases):
        
        test_case_path = os.path.join(test_case_dir, f"merge_test{i}.ys")
        compiled_test_case_path = os.path.join(test_case_dir, f"merge_test{i}.yo")
        
        print(f"Creating test case {i}...")
        create_test_file(test_case_path, implementation, lst1, lst2)
        
        print(f"Compiling test case {i}...")
        if not compile_with_yas(test_case_path, sys.argv[4]):
            print(f"Could not compile test case {i}!\n")
            print(f"Test case {i}: FAIL\n")
            continue
        else:
            could_not_compile = False
        
        print(f"Running test case {i}...")
        
        sim_path = sys.argv[3]
        
        result = execute_yo_file(sim_path, compiled_test_case_path, simulator_type=sys.argv[1])
        #you can uncomment here for a quick summary of the end of simulation
        #print(result.pretty_str())
        if not result.terminated_successfully():
            print(f"Test case {i} does not terminate successfully!\n")
            print(f"Test case {i}: FAIL\n")
            continue
        
        lst = [convert_python_int_to_y86_int(elem) for elem in lst]
        y86_lst = result.get_memrange(ARRAY3_BEGIN_ADDR, len(lst))
        
        if lst != y86_lst:
            print(f"Test case {i} does not merge correctly:!\n")
            print(f"Expected: {lst}\n")
            print(f"Got: {y86_lst}\n")
            print(f"Test case {i}: FAIL\n")
            continue
        
        num_success += 1
        print(f"Test case {i}: PASS\n")
    
    if could_not_compile:
        print("Could not compile any test cases.")
    else:
        print(f"Passed {num_success} / {num_test_cases}")
    print(f"Grade: {num_success / num_test_cases * 15.0:.2f}")  