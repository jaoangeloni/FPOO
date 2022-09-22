#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float calc(float c, float f);

int main(int argc, char *argv[]) {
	printf("%.2f", calc(0,23));
	return 0;
}

float calc(float c, float f){
	c = (f - 32) * 5/9 ;
	return c;	
}

