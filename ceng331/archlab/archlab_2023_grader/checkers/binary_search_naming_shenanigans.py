from utils import *
from sim_executor import *
import os
import random
import sys
import subprocess



def check_for_string_in_file(file_path, string):
    with open(file_path, 'r') as f:
        return string in f.read()

def check_if_label_called_in_file(file_path, label):
    sanitized = get_sanitized_code(file_path)
    return "call "+label in sanitized


SUBMISSIONS_EXTRACTED_DIR = os.path.join(os.path.dirname(__file__),"..","submissions_extracted")

if __name__ == "__main__":
    for dir in os.listdir(SUBMISSIONS_EXTRACTED_DIR):
        binary_search_it_path = os.path.join(SUBMISSIONS_EXTRACTED_DIR, dir, "binary_search_it.ys")
        binary_search_rec_path = os.path.join(SUBMISSIONS_EXTRACTED_DIR, dir, "binary_search_rec.ys")
        
        found_binary_search_it = os.path.exists(binary_search_it_path)
        found_binary_search_rec = os.path.exists(binary_search_rec_path)
        if found_binary_search_it:
            print(f"Could not find binary_search_it.ys in {dir}!")
        if found_binary_search_rec:
            print(f"Could not find binary_search_rec.ys in {dir}!")
        labels = ["binary_search:","binary_search_rec:","binary_search_it:"]
        if found_binary_search_it:
            contained_labels = [item for item in labels if check_for_string_in_file(binary_search_it_path, item)]
            print(f"binary_search_it.ys in {dir} contains {contained_labels}")
        if found_binary_search_rec:
            contained_labels = [item for item in labels if check_for_string_in_file(binary_search_rec_path, item)]
            print(f"binary_search_rec.ys in {dir} contains {contained_labels}")
        if found_binary_search_rec:
            if not check_if_label_called_in_file(binary_search_rec_path, "binary_search"):
                print(f"binary_search_rec.ys in {dir} does not call binary_search!")
                if check_if_label_called_in_file(binary_search_rec_path, "binary_search_rec"):
                    print(f"However binary_search_rec.ys in {dir} calls binary_search_rec!") 
            
        # def check_if_only_binary_search_label_in_file(file_path):
        #     labels = ["binary_search:","binary_search_rec:","binary_search_it:"]
        #     contained_labels = [item for item in labels if check_for_string_in_file(file_path, item)]
        #     return len(contained_labels) == 1 and contained_labels[0] == "binary_search:"
        # if not found_binary_search_it or \
        #    not found_binary_search_rec or \
        #    (found_binary_search_it and not check_if_only_binary_search_label_in_file(binary_search_it_path)) or \
        #    (found_binary_search_rec and not check_if_only_binary_search_label_in_file(binary_search_rec_path)):
            
        #     labels = ["binary_search:","binary_search_rec:","binary_search_it:"]
        #     if not found_binary_search_it:
        #         print(f"Could not find binary_search_it.ys in {dir}!")
        #     if found_binary_search_it:
        #         contained_labels = [item for item in labels if check_for_string_in_file(binary_search_it_path, item)]
        #         print(f"binary_search_it.ys in {dir} contains {contained_labels}")
        #     if not found_binary_search_rec:
        #         print(f"Could not find binary_search_rec.ys in {dir}!")
        #     if found_binary_search_rec:
        #         contained_labels = [item for item in labels if check_for_string_in_file(binary_search_rec_path, item)]
        #         print(f"binary_search_rec.ys in {dir} contains {contained_labels}")
           