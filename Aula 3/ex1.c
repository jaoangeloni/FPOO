/* 
	Desenvolva um programa que resolva a express�o (A+B)/C
	*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	int a,b,c,d;
	printf("Digite um valor para A:");
	scanf("%d", &a);
	printf("Digite um valor para B:");
	scanf("%d", &b);
	printf("Digite um valor para C:");
	scanf("%d", &c);
	
	d = (a+b) / c;
	
	printf("O resultado da equa��o (A+B)/C �: %d",d);
}
