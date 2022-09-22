#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float calc(float c, float f);

int main(int argc, char *argv[]) {
	printf("%.2f", calc(23,0));
	return 0;
}

float calc(float c, float f){
	f = (c * 9/5) + 32;
	return f;	
}

