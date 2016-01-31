#include <stdlib.h>
#include <stdio.h>


void *calloc(size_t nmemb, size_t size);
void *memset(void* b, int c, size_t len);

int main(){

	// just making params clear
    int numofmembs = 10;
    int membsize = sizeof(int);

    // allocate memory for 10 integers
	int *ip = (int*)calloc(numofmembs,membsize);

	// show everything is zeroed if calloc didn't return null
	if (ip != NULL) {
		printf("Zeroed memeory\n");
		for (int i = 0; i < numofmembs; ++i){
			printf("%i\n", ip[i]);
		}
	}

	return 0;
}

void *calloc(size_t nmemb, size_t size){
  
	void *ptr = malloc(nmemb*size); //allocate memory equal to total size using malloc function
  
	if (!ptr) {
		return NULL; // exit NULL if not enough memory
	} 

	return memset(ptr, 0, nmemb*size);	// memset returns a pointer to the allocated memory
}

// memset function - creates value at address
void* memset(void* s, int c, size_t length) {
	char* ptr = (char*)s;
	for (size_t i = 0; i != length; ++i) {
		ptr[i] = c;
	}
	return s;
}