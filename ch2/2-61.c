#include <stdio.h>

int A(int x); // Returns true if: any bit of x equals 1
int B(int x); // Returns true if: any bit of x equals 0
int C(int x); // Returns true if: any bit in the least significant byte of x equals 1
int D(int x); // Returns true if: any bit in the most significant byte of x equals 0

int main(int argc, char const *argv[]){
        
        printf("Number\tA\tB\tC\tD\n");
        for (int i = 0; i < 10; ++i){
                printf("%i\t\t%i\t%i\t%i\t%i\t",i,A(i),B(i),C(i),D(i));
                putchar('\n');
        }

        return 0;
}

// Returns true if: any bit of x equals 1
int A(int x){
        return !!x;
}

// Returns true if: any bit of x equals 0
int B(int x){
        return !!~x; /* Or !!~x */
}

// Returns true if: any bit in the least significant byte of x equals 1
int C(int x){
        return !!(x & 0xFF);
}

// Returns true if: any bit in the most significant byte of x equals 0
int D(int x){
        return !!(~x & 0xFF);
}