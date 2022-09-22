#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int calc(int dec, int bin);

int main(int argc, char *argv[]) {
	printf("%d", calc(23,0));
	return 0;
}

int calc(int dec, int bin){
	dec%2 = bin;
	dec = dec/2;
	return bin;	
}

