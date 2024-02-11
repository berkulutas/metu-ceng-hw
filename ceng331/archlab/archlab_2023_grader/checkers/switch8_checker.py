from utils import *
from sim_executor import *
import os
import random

SEED = 0xdeadbeef
random.seed(SEED)
ARRAY1_BEGIN_ADDR = 0x1000
ARRAY2_BEGIN_ADDR = 0x1500

def random_uniform_list(length):
    first_elem = random.randint(32, 64)
    result = list(range(first_elem, first_elem+length))
    random.shuffle(result)
    return result

def create_test_file(file_name, implementation, lst):
    prologue=f""".pos 0x0
	irmovq stack, %rsp
    irmovq array_begin1, %rdi
    irmovq array_begin2, %rsi
    irmovq ${len(lst)}, %rdx
    call switch8
    halt"""

    epilogue =""".pos 0x1F00
stack:
.quad 0

"""
    array_str = y86_asm_array("array_begin1", "array_end1", lst)
    with open(file_name, 'w') as f:
        f.write(prologue)
        f.write(implementation)
        f.write(f"\n.pos 0x{ARRAY1_BEGIN_ADDR:04X}\n")
        f.write(array_str)
        f.write(f"\n.pos 0x{ARRAY2_BEGIN_ADDR:04X}\narray_begin2:\n.quad 0\n")
        f.write(epilogue)

def case_8(num):
    modd = num % 8
    if modd == 0:
        return num+1
    elif modd == 1:
        return num*5
    elif modd == 2:
        return num//2
    elif modd == 3:
        return num%3
    elif modd == 4:
        return num-7
    elif modd == 5:
        return 331
    elif modd == 6:
        return num+10
    elif modd == 7:
        return num//3

def switch_8(num):
    return case_8(num)+16

if __name__ == "__main__":
    if len(sys.argv) < 6:
        sys.stderr.write("Usage: python3 switch8_checker.py {yis, ssim, psim} <path to switch8.ys> <path to sim> <path to yas> <test_dir_name>\n")
        print("Checker incorrectly called.")
        print("Grade: 0")
        sys.exit(1)
    
    TEST_CASE_DIR = sys.argv[5]
    could_not_compile = True
        
    test_cases = [(random_uniform_list(1),),
                  (random_uniform_list(2),),
                  (random_uniform_list(4),),
                  (random_uniform_list(8),),
                  (random_uniform_list(16),),
                  (random_uniform_list(32),)]
    
    test_cases.extend([(random_uniform_list(64),) for _ in range(24)])
    
    num_test_cases = len(test_cases)
    num_success = 0
    code_abs_path = os.path.abspath(sys.argv[2])
    test_case_dir = os.path.join(os.path.dirname(code_abs_path), TEST_CASE_DIR)
    total_cpe = 0
    
    os.makedirs(test_case_dir, exist_ok=True)
    
    try:
        implementation = get_sanitized_code(sys.argv[2])
    except Exception as e:
        sys.stderr.write(f"Could not find start or end of implementation! Keep those comments!\n")
        print("Could not find start or end of implementation.")
        print("Grade: 0")
        sys.exit(1)
    
    for i, (lst,) in enumerate(test_cases):
        
        test_case_path = os.path.join(test_case_dir, f"switch8_test{i}.ys")
        compiled_test_case_path = os.path.join(test_case_dir, f"switch8_test{i}.yo")
        
        print(f"Creating test case {i}...")
        create_test_file(test_case_path, implementation, lst)
        
        print(f"Compiling test case {i}...")
        if not compile_with_yas(test_case_path, sys.argv[4]):
            print(f"Could not compile test case {i}!\n")
            print(f"Test case {i}: FAIL\n")
            continue
        else:
            could_not_compile = False
        
        print(f"Running test case {i}...")
        
        sim_type = sys.argv[1]
        sim_path = sys.argv[3]
        
        result = execute_yo_file(sim_path, compiled_test_case_path, simulator_type=sys.argv[1])

        if not result.terminated_successfully():
            print(f"Test case {i} does not terminate successfully!\n")
            print(result.pretty_str())
            print(f"Test case {i}: FAIL\n")
            continue
        
        expected_lst = [convert_python_int_to_y86_int(switch_8(elem)) for elem in lst]
        y86_lst = result.get_memrange(ARRAY2_BEGIN_ADDR, len(lst))

        if expected_lst != y86_lst:
            print(f"Test case {i} does not switch8 correctly:!\n")
            print(f"Expected: {lst}\n")
            print(f"Got: {y86_lst}\n")
            print(f"Test case {i}: FAIL\n")
            continue
        
        num_success += 1
        print(f"Test case {i}: PASS\n")
        if sim_type == "psim":
            print(f"CPE: {result.cycles / len(lst)} (List Length: {len(lst)})")
            total_cpe += result.cycles / len(lst)
    
    if sim_type == "psim" and num_success > 0:
        print(f"Average CPE: {total_cpe / num_success}")
    
    if could_not_compile:
        print("Could not compile any test cases.")
    else:
        print(f"Passed {num_success} / {num_test_cases}")
    print(f"Grade: {num_success / num_test_cases * 15.0:.2f}")

