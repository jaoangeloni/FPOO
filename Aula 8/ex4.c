#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int num(int a, int b);

int main() {
	setlocale(LC_ALL,"");
	int a, b;
	printf("Digite 2 n�meros inteiros:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("O maior n�mero � %d",num(a,b));
	return 0;
}

int num(int a, int b){
	if(a > b) return a;
	else return b;	
}

