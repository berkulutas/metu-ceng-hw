from utils import *
from sim_executor import *
import os
import random

SEED = 0xbeef
random.seed(SEED)

ARRAY1_BEGIN_ADDR = 0x1008


def random_ascending_integer_list(length):
    random_list = random.sample(range(50, 500), length)
    random_list.sort()
    return random_list

def random_binary_search_test_case(query_value_exists):
    lst = random_ascending_integer_list(random.randint(10,20))
    if query_value_exists:
        query_value = random.choice(lst)
        query_index = lst.index(query_value)+1
    else:
        query_value = random.randint(700, 1000)
        query_index = -1
    
    return (lst, query_value, query_index)

def create_test_file(file_name, implementation, lst, query_value):
    prologue =f""".pos 0x0
irmovq stack, %rsp
irmovq $999, %rax
irmovq ${query_value}, %rdx #queried value
irmovq array_begin, %rdi
irmovq array_end, %rsi
call binary_search
halt
"""

    epilogue =""".pos 0x1F00
stack:
.quad 0

"""
    array_str = y86_asm_array("array_begin", "array_end", lst)
    with open(file_name, 'w') as f:
        f.write(prologue)
        f.write(implementation)
        f.write(f"\n.pos 0x{ARRAY1_BEGIN_ADDR:04X}\n")
        f.write(array_str)
        f.write(epilogue)


if __name__ == "__main__":
    if len(sys.argv) < 6:
        sys.stderr.write("Usage: python3 binary_search_checker.py {yis, ssim, psim} <path to binary_search.ys> <path to sim> <path to yas> <test_dir_name>\n")
        print("Checker incorrectly called.")
        print("Grade: 0")
        sys.exit(1)
        
    could_not_compile = True
    TEST_CASE_DIR = sys.argv[5]

    test_cases = [([], 100, -1),
            ([30], 30, 1),
            ([30], 50, -1),
            ([30], 15, -1),
            ([30, 60], 30, 1),
            ([30, 60], 60, 2),
            ([30, 60], 70, -1)]
    
    test_cases.extend([random_binary_search_test_case(True) for _ in range(19)])
    test_cases.extend([random_binary_search_test_case(False) for _ in range(4)])
    
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
    
    for i, (lst, query_value, query_index) in enumerate(test_cases):
        
        test_case_path = os.path.join(test_case_dir, f"binary_search_test{i}.ys")
        compiled_test_case_path = os.path.join(test_case_dir, f"binary_search_test{i}.yo")
        
        print(f"Creating test case {i}...")
        create_test_file(test_case_path, implementation, lst, query_value)
        
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
        if not result.terminated_successfully():
            print(f"Test case {i} does not terminate successfully!\n")
            print(result.pretty_str())
            print(f"Test case {i}: FAIL\n")
            continue
        
        query_index = convert_python_int_to_y86_int(query_index)
        if result.get_retval() != query_index or result.get_retval() == 0 and query_index == -1:
            print(f"Test case {i} returns {result.get_retval():016X}, not the correct value {query_index:016X}!\n")
            print(f"Test case {i}: FAIL\n")
            continue
        
        num_success += 1
        print(f"Test case {i}: PASS\n")
    if could_not_compile:
        print("Could not compile any test cases.")
    else:
        print(f"Passed {num_success} / {num_test_cases}")
    print(f"Grade: {num_success / num_test_cases * 15.0:.2f}")
          