#include <bits/stdc++.h>
using namespace std;

int main() {
    char in[200], res[200];
    for (int i = 1; i <= 200; i++) {
       snprintf(in, 200, "g++ -ansi -Wall -pedantic-errors -O0 -std=c++11 ../window_in/case%d.cpp", i);
        system(in);
        snprintf(res, 200, "./a.out > ../window_out/output%d.txt", i);
        system(res);
    }

    return 0;
}
