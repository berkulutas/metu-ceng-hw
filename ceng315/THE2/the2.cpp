#include "the2.h"

// do not add extra libraries here
/*
    arr       : array to be sorted, in order to get points this array should contain be in sorted state before returning
    ascending : true for ascending, false for descending 
    size      : number of elements in the array
*/

int get_c_index(std::string* arr, int elem, int index) {
    if (arr[elem].length()-1 < index) return 0;
    return arr[elem][index]-64;
}

int counting_sort(std::string* arr, int arr_size, int index) {
    int cnt = 0; 
    int *c = new int[27];
    std::string result[arr_size];

    for (int i=0; i<27; i++) {
        c[i] = 0; 
    }

    for (int j=0; j<arr_size; j++) {
        c[get_c_index(arr, j, index)] += 1; 
        cnt++; 
    }

    for (int i=1; i<27; i++) {
        c[i] += c[i-1];
        cnt++; 
    }

    for (int j=arr_size-1; j>=0; j--) {
        result[c[get_c_index(arr, j, index)]-1] = arr[j];
        c[get_c_index(arr, j, index)] -= 1;  
        cnt++;
    }

    for (int i=0; i<arr_size; i++) {
        arr[i] = result[i];
        cnt++; 
    }

    return cnt; 
}

int get_max_len(std::string* arr, int size) {
    int max_len = 0; 
    for (int i=0; i<size; i++) {
        int len = arr[i].length();
        max_len = len > max_len ? len : max_len;
    }
    return max_len;
}

int radix_string_sort(std::string* arr, int size, bool ascending){
    int cnt=0; 
    int max_len = get_max_len(arr, size);
    for (int i=max_len-1; i>=0; i--) {
        cnt+=counting_sort(arr, size, i);
    }

    if (ascending == false) {
        for (int i=0; i<size/2; i++) {
            auto tmp = arr[i];
            arr[i] = arr[(size-1)-i];
            arr[(size-1)-i] = tmp; 
        }
    }
    return cnt;    
}
