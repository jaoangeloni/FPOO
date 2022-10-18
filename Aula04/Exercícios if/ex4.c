#include<stdio.h>
#include<locale.h>

int main(){
	
	
	setlocale(LC_ALL,"");
	float a,b,c;
	
	//entrada
	printf("Digite a medida dos lados de um triângulo(cm)\n\n");
	
	printf("Lado A: ");
	scanf("%f",&a);
	printf("Lado B: ");
	scanf("%f",&b);
	printf("Lado C: ");
	scanf("%f",&c);
	
	//processamento e saída
	
	if(a == b && b == c){
		printf("\nEsse triângulo é equilátero");
	}else if(a != b && a != c && b != c){
		printf("\nEsse triângulo é escaleno");
	}else{
		printf("\nEsse triângulo é isósceles");
	}
}
