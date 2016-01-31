#include <stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2){
        (n & i)? printf("1"): printf("0");   
    }
}

int funcA(int n){
	return ((~0) << n);
}
int funcB(int n, int m){
	return ((1 << n) - 1) << m;
}

int main(int argc, char const *argv[])
{
	bin(funcA(2));
	putchar('\n');
	bin(funcB(3,4));

	return 0;
}