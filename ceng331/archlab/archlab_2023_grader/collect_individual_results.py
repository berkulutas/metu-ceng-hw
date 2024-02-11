import os
import csv

directory = 'submissions_extracted_with_testbeds'
binary_search_it_filename = 'binary_search_it_checker.out'
binary_search_rec_filename = 'binary_search_rec_checker.out'
merge_filename = 'merge_checker.out'
partb_filename = 'partb.out'
partc_filename = 'partc.out'

Y86CODE_ISA_CHECKS = 16
PTEST_ISA_CHECKS = 735


def calculate_partc_performance_grade(cpe):
    if cpe is None or cpe > 36.5:
        return 0
    elif cpe <= 36.5 and cpe >= 28.5:
        return 6.25*(36.5-cpe)
    else:
        return 50

def check_partb(dir):
    
    with open(os.path.join(directory, dir, 'partb.out')) as f:
        lines = f.readlines()
        if lines[-1].startswith('seq-full.hcl does not exist in submission'):
            return ()

with open('results.csv', 'w') as csvfile:
    writer = csv.DictWriter(csvfile, fieldnames=['id',
                                                 'binary_search_it_grade',
                                                 'binary_search_rec_grade',
                                                 'merge_grade',
                                                 
                                                 'partb_y8code_grade',
                                                 'partb_ptest_grade',
                                                 'partb_jtabtest_grade',
                                                 'partb_answerkey_switch8_grade',
                                                 
                                                 'partc_switch8_grade',
                                                 'partc_y86code_works',
                                                 'partc_ptest_works',
                                                 'partc_jtabtest_grade',
                                                 'partc_answerkey_switch8_grade',
                                                 'partc_performance_grade',
                                                 'partc_CPE',
                                                 'total',
                                                 'comments'])
    
    writer.writeheader()
    for dir in sorted(os.listdir(directory)):
        print("Processing", dir)
        binary_search_it_grade = 0
        binary_search_rec_grade = 0
        merge_grade = 0
        
        partb_y8code_grade = 0
        partb_ptest_grade = 0
        partb_jtabtest_grade = 0
        partb_answerkey_switch8_grade = 0
        
        partc_switch8_grade = 0
        partc_y86code_works = 0
        partc_ptest_works = 0
        partc_jtabtest_grade = 0
        partc_answerkey_switch8_grade = 0
        partc_performance_grade = 0
        
        total = 0
        comments = ''
        
        with open(os.path.join(directory, dir, binary_search_it_filename)) as f:
            lines = f.readlines()
            binary_search_it_grade = float(lines[-1].strip().split()[-1])
            comments += f'binary_search_it grade: {binary_search_it_grade:.2f} comments: {lines[-2].strip()}\n'
        with open(os.path.join(directory, dir, binary_search_rec_filename)) as f:
            lines = f.readlines()
            binary_search_rec_grade = float(lines[-1].strip().split()[-1])
            comments += f'binary_search_rec grade: {binary_search_rec_grade:.2f} comments: {lines[-2].strip()}\n'
        with open(os.path.join(directory, dir, merge_filename)) as f:
            lines = f.readlines()
            merge_grade = float(lines[-1].strip().split()[-1])
            comments += f'merge grade: {merge_grade:.2f} comments: {lines[-2].strip()}\n'
        
        
        
        total = binary_search_it_grade + binary_search_rec_grade + merge_grade +\
                partb_y8code_grade + partb_ptest_grade + partb_jtabtest_grade + partb_answerkey_switch8_grade +\
                partc_switch8_grade + partc_y86code_works + partc_ptest_works + partc_jtabtest_grade + partc_answerkey_switch8_grade + partc_performance_grade
        
        
        seq_compiles = True
        with open(os.path.join(directory, dir, partb_filename)) as f:
            lines = f.readlines()
            if lines[-1].startswith('seq-full.hcl does not exist in submission'):
                partb_y8code_grade = 0
                partb_ptest_grade = 0
                partb_jtabtest_grade = 0
                partb_answerkey_switch8_grade = 0
                comments += f'partb: seq-full.hcl does not exist in submission\n'
                seq_compiles = False
            elif lines[-1].startswith('make ssim VERSION=full failed'):
                partb_y8code_grade = 0
                partb_ptest_grade = 0
                partb_jtabtest_grade = 0
                partb_answerkey_switch8_grade = 0
                comments += f'partb: seq-full.hcl failed to compile\n'
                seq_compiles = False
            else:
                partb_y8code_isa_check_count = 0
                partb_ptest_isa_check_count = 0
                for line in lines:
                    line = line.strip()
                    if line.endswith('ISA Check Succeeds'):
                        partb_y8code_isa_check_count += 1
                    elif line.endswith('ISA Checks Succeed'):
                        partb_ptest_isa_check_count += int(line.split()[1])
                    elif line.endswith('ISA Checks Failed'):
                        ecount_slash_tcount = line.strip().split()[0]
                        ecount = int(ecount_slash_tcount.split('/')[0])
                        tcount = int(ecount_slash_tcount.split('/')[1])
                        partb_ptest_isa_check_count += tcount - ecount
                
                partb_y8code_grade = partb_y8code_isa_check_count / Y86CODE_ISA_CHECKS * 2.5
                partb_ptest_grade = partb_ptest_isa_check_count / PTEST_ISA_CHECKS * 2.5
            
                comments += f'partb_y8code_grade: {partb_y8code_grade:.2f} comments: Passed {partb_y8code_isa_check_count}/{Y86CODE_ISA_CHECKS}\n'
                comments += f'partb_ptest_grade: {partb_ptest_grade:.2f} comments: Passed {partb_ptest_isa_check_count}/{PTEST_ISA_CHECKS}\n'
        
        if seq_compiles:
            with open(os.path.join(directory, dir, 'partb_jtabtest.out')) as f:
                lines = f.readlines()
                partb_jtabtest_success_count = len([line for line in lines if line.startswith('ISA Check Succeeds')])
                partb_jtabtest_grade = partb_jtabtest_success_count / 3 * 5.0
                comments += f'partb_jtabtest_grade: {partb_jtabtest_grade:.2f} comments: Passed {partb_jtabtest_success_count}/3\n'
            with open(os.path.join(directory, dir, 'partb_answerkey_switch8.out')) as f:
                lines = f.readlines()
                partb_answerkey_switch8_grade = float(lines[-1].strip().split()[-1])
                comments += f'partb_answerkey_switch8_grade: {partb_answerkey_switch8_grade:.2f} comments: {lines[-2].strip()}\n'
        
        pipe_compiles = True
        with open(os.path.join(directory, dir, partc_filename)) as f:
            lines = f.readlines()
            if lines[-1].startswith('pipe-full.hcl does not exist in submission'):
                partc_y8code_grade = 0
                partc_ptest_grade = 0
                partc_jtabtest_grade = 0
                partc_answerkey_switch8_grade = 0
                comments += f'partc: pipe-full.hcl does not exist in submission\n'
                pipe_compiles = False
            elif lines[-1].startswith('make psim VERSION=full failed'):
                partc_y8code_grade = 0
                partc_ptest_grade = 0
                partc_jtabtest_grade = 0
                partc_answerkey_switch8_grade = 0
                comments += f'partc: pipe-full.hcl failed to compile\n'
                pipe_compiles = False
            else:
                partc_y8code_isa_check_count = 0
                partc_ptest_isa_check_count = 0
                for line in lines:
                    line = line.strip()
                    if line.endswith('ISA Check Succeeds'):
                        partc_y8code_isa_check_count += 1
                    elif line.endswith('ISA Checks Succeed'):
                        partc_ptest_isa_check_count += int(line.split()[1])
                
                partc_y86code_works = partc_y8code_isa_check_count == Y86CODE_ISA_CHECKS
                partc_ptest_works = partc_ptest_isa_check_count == PTEST_ISA_CHECKS
            
                comments += f'partc_y86code_works: {partc_y86code_works}\npartc_ptest_works: {partc_ptest_works}\n'
        
        partc_CPE = None
        if pipe_compiles:
            with open(os.path.join(directory, dir, 'partc_switch8.out')) as f:
                lines = f.readlines()
                if lines[-1].strip().startswith("Grade"):
                    partc_switch8_grade = float(lines[-1].strip().split()[-1])
                    comments += f'partc_switch8_grade: {partc_switch8_grade:.2f} comments: {lines[-2].strip()}\n'
                    if len(lines) > 2 and lines[-3].strip().startswith('Average CPE:'):
                        partc_CPE = float(lines[-3].strip().split()[-1])
            with open(os.path.join(directory, dir, 'partc_jtabtest.out')) as f:
                lines = f.readlines()
                partc_jtabtest_success_count = len([line for line in lines if line.startswith('ISA Check Succeeds')])
                partc_jtabtest_grade = partc_jtabtest_success_count / 3 * 5.0
            with open(os.path.join(directory, dir, 'partc_answerkey_switch8.out')) as f:
                lines = f.readlines()
                if lines[-1].strip().startswith("Grade"):
                    partc_answerkey_switch8_grade = float(lines[-1].strip().split()[-1])
            if partc_switch8_grade > 14.99 and partc_ptest_works and partc_y86code_works:
                comments += f'partc_jtabtest_grade: {partc_jtabtest_grade:.2f} comments: Passed {partc_jtabtest_success_count}/3\n'
                comments += f'partc_answerkey_switch8_grade: {partc_answerkey_switch8_grade:.2f} comments: {lines[-2].strip()}\n'
                partc_performance_grade = calculate_partc_performance_grade(partc_CPE)
                comments += f'partc_performance_grade: {partc_performance_grade:.2f} comments: CPE: {partc_CPE}\n'
            else:
                comments += f'Second item in Part C grading is not satisfied.'
                partc_jtabtest_grade = 0
                comments += f'partc_jtabtest_grade: {partc_jtabtest_grade:.2f} comments: Not eligible for jtabtest grade\n'
                partc_answerkey_switch8_grade = 0
                comments += f'partc_answerkey_switch8_grade: {partc_answerkey_switch8_grade:.2f} comments: Not eligible for answerkey_switch8 grade\n'
                partc_performance_grade = 0
                comments += f'partc_performance_grade: {partc_performance_grade:.2f} comments: Not eligible for performance grade\n'
                

        
        total = binary_search_it_grade + binary_search_rec_grade + merge_grade +\
                partb_y8code_grade + partb_ptest_grade + partb_jtabtest_grade + partb_answerkey_switch8_grade +\
                partc_switch8_grade + partc_jtabtest_grade + partc_answerkey_switch8_grade + partc_performance_grade
        comments += f'total: {total:.2f}'
        
        print(comments)
        writer.writerow({'id': dir,
                            'binary_search_it_grade': binary_search_it_grade,
                            'binary_search_rec_grade': binary_search_rec_grade,
                            'merge_grade': merge_grade,
                            'partb_y8code_grade': partb_y8code_grade,
                            'partb_ptest_grade': partb_ptest_grade,
                            'partb_jtabtest_grade': partb_jtabtest_grade,
                            'partb_answerkey_switch8_grade': partb_answerkey_switch8_grade,
                            'partc_switch8_grade': partc_switch8_grade,
                            'partc_y86code_works': partc_y86code_works,
                            'partc_ptest_works': partc_ptest_works,
                            'partc_jtabtest_grade': partc_jtabtest_grade,
                            'partc_answerkey_switch8_grade': partc_answerkey_switch8_grade,
                            'partc_performance_grade': partc_performance_grade,
                            'partc_CPE': partc_CPE,
                            'total': total,
                            'comments': comments})