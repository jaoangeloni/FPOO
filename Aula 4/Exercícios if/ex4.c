#include<stdio.h>
#include<locale.h>

int main(){
	
	
	setlocale(LC_ALL,"");
	float a,b,c;
	
	//entrada
	printf("Digite a medida dos lados de um tri�ngulo(cm)\n\n");
	
	printf("Lado A: ");
	scanf("%f",&a);
	printf("Lado B: ");
	scanf("%f",&b);
	printf("Lado C: ");
	scanf("%f",&c);
	
	//processamento e sa�da
	
	if(a == b && b == c){
		printf("\nEsse tri�ngulo � equil�tero");
	}else if(a != b && a != c && b != c){
		printf("\nEsse tri�ngulo � escaleno");
	}else{
		printf("\nEsse tri�ngulo � is�sceles");
	}
}
