#include <stdio.h> 
#include <stdlib.h> 

typedef unsigned char* byte_pointer;

void show_bytes_reverse(byte_pointer start, size_t len);
void show_int_reverse(int x);

int fun1(unsigned word);
int fun2(unsigned word);

int main(int argc, char const *argv[]){

	unsigned int examples[4] = {0x00000076,0x87654321,0x000000C9,0xEDCBA987};

	printf("  Number\t  fun1()\t  fun2()\n");

	for (int i = 0; i < 4; ++i){
		show_int_reverse(examples[i]);
		putchar('\t');
		show_int_reverse(fun1(examples[i]));
		putchar('\t');
		show_int_reverse(fun2(examples[i]));
		putchar('\n');
	}

	return 0;
}

void show_bytes_reverse(byte_pointer start, size_t len){
	int i;
	printf("0x");
	for (int i = 1; i <= len;i++){
		printf("%.2x", start[len-i]);
	}
}

void show_int_reverse(int x){
	show_bytes_reverse((byte_pointer)&x, sizeof(int));
}

int fun1(unsigned word){
	return (int) ((word << 24) >> 24);
}

int fun2(unsigned word){
	return ((int) (word << 24) >> 24);
}