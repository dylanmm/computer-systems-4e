#include <stdio.h>

int any_odd_one(unsigned x);    // returns 1 when any odd bit of x is 1
void bin(unsigned n);           // printf the binary representation of number in big-endian layout

int main(int argc, char const *argv[]){
        int i;

        printf("Number (n)\tany_odd_one(n)\tBinary\n");
        for (int i = 0; i <= 10; ++i){
                printf("\t%i\t\t\t\t%i\t\t",i,any_odd_one(i));
                bin(i);
                putchar('\n');
        }

        return 0;
}

int any_odd_one(unsigned x){
        // if you consider the first bit odd
        return !!(x & 0x55555555);      
        // if you consider the first bit the 0th bit, and the next place the first odd one
        //return !!(x & 0xAAAAAAAA);    
}

void bin(unsigned n){
    unsigned int i;
    for (i = 1 << 31; i > 0; i = i / 2){
        if (n & i) { 
            printf("1");
        } else {
            printf("0");
        }   
    }
}