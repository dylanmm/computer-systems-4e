#include <stdio.h>

unsigned replace_byte (unsigned x, int i, unsigned char b);

int main(int argc, char const *argv[]){

	// Example hex from the book
	printf("%x\n",replace_byte(0x12345678, 2, 0xAB)); // --> 12ab5678
	printf("%x\n",replace_byte(0x12345678, 0, 0xAB)); // --> 123456ab

	return 0;
}

unsigned replace_byte (unsigned x, int i, unsigned char b){

	if (i>=0 && i<sizeof(x)){
		*((unsigned char*)&x+i)=b;
	}

	return x;
}