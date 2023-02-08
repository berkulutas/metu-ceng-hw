#include <bits/stdc++.h>
using namespace std;


int main() {
    char in[200], res[200];

    for (int i = 1; i <= 200; i++) {
        snprintf(in, 200, "g++ -ansi -Wall -pedantic-errors -O0 -std=c++11 ../browser_in/case%d.cpp", i);
        system(in);
        snprintf(res, 200, "./a.out > ../browser_out/output%d.txt", i);
        system(res);
}
/*
    for (int i = 1; i <= 200; i++) {
        char f[50];
        snprintf(f, 50, "sed -i '' '/^ <</d' case%d.cpp", i);
        system(f);
    }
*/
    return 0;
}
