#include <stdio.h>
#include <limits.h>

int tadd_ok(int x, int y){
  int sum = x + y;
  if (sum >= 0 && x < 0 && y < 0) {
    return 0;
  }
  if (sum < 0 && y > 0) {
    return 0;
  }
  return 1;
}

int main()
{
	unsigned int x = 4;
	signed int y = -200;

	if (tadd_ok(x,y)){
		puts("You can add them without overflow.");
	} else {
		puts("Overflow will occur.");
	}

	int j = INT_MAX;
	int k = 1;
	
	if (tadd_ok(j,k)){
		puts("You can add them without overflow.");
	} else {
		puts("Overflow will occur.");
	}
}