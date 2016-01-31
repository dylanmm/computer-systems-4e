#include <stdio.h>

void bin(unsigned n);

int funcA(int k);
int funcB(int k, int j);

int main(int argc, char const *argv[])
{
	bin(funcA(2));

	putchar('\n');

	bin(funcB(4,4));

	putchar('\n');

	return 0;
}

int funcA(int k){
	return ((~0) << k);
}
int funcB(int k, int j){
	return ((1 << k) - 1) << j;
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