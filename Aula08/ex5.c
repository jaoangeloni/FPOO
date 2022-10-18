#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool num(int a, int b);

int main(int argc, char *argv[]) {
	printf("%d", num(24,24));
	return 0;
}

bool num(int a, int b){
	if(a == b) return true;
	else return false;	
}

