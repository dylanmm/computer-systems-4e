#include <stdio.h>

void inplace_swap(int *x, int *y);
void reverse_array(int a[], int count);

int main(){

	// Two integers j and k
	int j = 4;
	int k = 5;

	// Display them pre and post swap to show inplace_swap() working
	printf("j = %d, k = %d\n", j, k);
	inplace_swap(&j,&k);
	printf("j = %d, k = %d\n", j, k);

	int a[4] = {1,2,3,4,};		// array #1 - 4 elements
	int b[5] = {1,2,3,4,5};		// array #2 - 5 elements, to show an odd number

	// Print out the array post reversal
	reverse_array(a, (sizeof(a)/sizeof(*a)));
	for(int i=0; i < (sizeof(a)/sizeof(*a)); i++){
			printf("%d ", a[i]);}
	printf("\n");

	// Print out the array post reversal
	reverse_array(b, (sizeof(b)/sizeof(*b)));
	for(int i=0; i < (sizeof(b)/sizeof(*b)); i++){
			printf("%d ", b[i]);}
	printf("\n");
	return 0;
}

void inplace_swap(int *x, int *y){
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int a[], int count){
	int first, last;

	for(first=0, last=count-1; first < last; first++, last--){
		inplace_swap(&a[first], &a[last]);
	}
}
