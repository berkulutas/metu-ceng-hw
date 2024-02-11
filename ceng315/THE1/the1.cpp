#include "the1.h"

//You may write your own helper functions here
void swap_fun(unsigned short* arr, int i, int j, long &swap, long &total_dist, double &max_dist, double& avg_dist){
    auto tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
    int dist = i>j ? (i-j) : (j-i);
    total_dist += dist;
    max_dist = max_dist > dist ? max_dist : dist;
    swap++;
    avg_dist = (double)total_dist/swap;
}

int fmi(unsigned short* arr, int size) {
    int f = 0, m = (size-1)/2, l = size-1;

    if (arr[f] == arr[m] || arr[f] == arr[l] || arr[m] == arr[l])
        return -1;

    if (arr[f] > arr[m]) {
        if (arr[l] > arr[f]) return f; 
        else{
            return arr[m] > arr[l] ? m : l; 
        }
    }
    else {
        if (arr[l] > arr[m]) return m;
        else {
            return arr[l] > arr[f] ? l : f; 
        }
    }

}

int lomuto(unsigned short* arr, int size, long &swap, long &total_dist, double &max_dist, double &avg_dist) {
    auto x = arr[size-1];
    int i = -1; 
    for (int j=0; j<=size-2; j++) {
        if (arr[j] >= x) {
            i = i+1;
            swap_fun(arr, i, j, swap, total_dist, max_dist, avg_dist);
        }
    }
    swap_fun(arr, i+1, size-1, swap, total_dist, max_dist, avg_dist);
    return i+1; 
}

int qs_l(unsigned short* arr, int size, long &swap, long &total_dist, double &max_dist, bool median_of_3, double &avg_dist){
    if (median_of_3){
        int m = fmi(arr, size);
        if (m != -1 && m != size-1 ) swap_fun(arr, m, size-1, swap, total_dist, max_dist, avg_dist);
    }
    
    int call = 1;
    if (size>1) {
        auto p = lomuto(arr, size, swap, total_dist, max_dist, avg_dist);
        call += qs_l(arr, p, swap, total_dist, max_dist, median_of_3, avg_dist);
        call += qs_l(arr+p+1, size-(p+1), swap,total_dist, max_dist, median_of_3, avg_dist);
    }
    return call; 
} 

int hoare(unsigned short* arr, int size, long &swap, long &total_dist, double &max_dist, double &avg_dist){
    auto x = arr[(size-1)/2];
    int i = -1; 
    int j = size; 

    while (1) {
        do {
            j = j-1; 
        } while (arr[j] < x); 

        do {
            i = i+1; 
        }while (arr[i] > x);

        if (i < j) {
            swap_fun(arr, i, j, swap, total_dist, max_dist, avg_dist);
        }
        else {
            return j; 
        }
    }
}

int qs_h(unsigned short* arr, int size, long &swap, long &total_dist, double &max_dist, bool median_of_3, double &avg_dist){
    if (median_of_3){
        int m = fmi(arr, size);
        if (m != -1 && m != (size-1)/2) swap_fun(arr, m, (size-1)/2, swap, total_dist, max_dist, avg_dist);
    }
    int call = 1; 
    if (size>1) {
        auto p = hoare(arr, size, swap, total_dist, max_dist, avg_dist);
        call += qs_h(arr, p+1, swap, total_dist, max_dist, median_of_3, avg_dist);
        call += qs_h(arr+p+1, size-(p+1), swap,total_dist,max_dist, median_of_3, avg_dist);
    }
    return call; 
}

int quickSort(unsigned short* arr, long& swap, double& avg_dist, double& max_dist, bool hoare, bool median_of_3, int size){
    //Your code here
    long total_dist = 0;
    int res; 

    if (hoare == false) {
        res = qs_l(arr, size, swap, total_dist, max_dist, median_of_3, avg_dist);
    }
    else {
        res = qs_h(arr, size, swap, total_dist, max_dist, median_of_3, avg_dist);
    }

    return res;
}