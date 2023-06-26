#include <stdio.h>
#include <stdbool.h>

void print_binary(int n) {
    switch(n) {
        case 0:
            printf("00");
            break;
        case 1:
            printf("01");
            break;
        case 2:
            printf("10");
            break;
        case 3:
            printf("11");
            break;
    }
}

bool x(float a, float b) {
    float val = ((((int)a+4)%2) + (b+1)/2) - (a/2)*((int)b%2);
    if (1 < val && val < 2.5)
        return 1; 
    return 0; 
}

bool y(float a, float b) {
    if (((a+5)/(b+3)*((int)b<<5)) > ((a+3)/(b+3)*((int)a<<5)))
        return 1;
    return 0; 
}

bool z(float a, float b) {
    if ((a!=b) && (((a+b)/(a-b)) > -2))
        return 1;
    return 0; 
}

bool q(float a, float b) {
    if (a-b > -1)
        return 1;
    return 0; 
}

int main() {
    int a,b;
    printf("A  B  X Y Z Q\n");
    for(a=0; a<4; a++) {
        for(b=0; b<4; b++) {
            print_binary(a);
            printf(" ");
            print_binary(b);
            printf(" %d %d %d %d\n", x(a,b), y(a,b), z(a,b), q(a,b));
            // printf(" %d\n", x(a,b));
            // printf("   %d\n", y(a,b));
            // printf("     %d\n", z(a,b));
            // printf("       %d\n", q(a,b));
            // printf("%d %d %d %d %d %d\n", a, b, x(a,b), y(a,b), z(a,b), q(a,b));
        }
        printf("\n");
    }
}