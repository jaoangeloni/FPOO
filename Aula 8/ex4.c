#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int num(int a, int b);

int main(int argc, char *argv[]) {
	printf("%d", num(23,24));
	return 0;
}

int num(int a, int b){
	if(a > b) return a;
	else return b;	
}

