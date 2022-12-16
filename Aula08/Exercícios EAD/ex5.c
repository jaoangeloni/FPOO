#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL,"");
	
	float a,b,c,delta;
	float raiz1, raiz2;
	
	//entrada
	
	printf("Calculadora de raízes de equações de 2º grau\n\n");
	printf("Digite o coeficiente A: ");
	scanf("%f", &a);
	printf("Digite o coeficiente B: ");
	scanf("%f", &b);
	printf("Digite o coeficiente B: ");
	scanf("%f", &c);
	
	//processamento
	
	delta = (b*b) - 4*a*c;
	raiz1 = ((-1 * b) - sqrt(delta))/ 2*a;
	raiz2 =((-1 * b) + sqrt(delta))/ 2*a;
	
	
	//saída
	
	if(a == 0){
		printf("Não é uma equação de segundo grau.\n");
		system("pause");
	}else if(delta < 0){
		printf("A equação não possuí valores reais.\n");
		system("pause");
	}else{
		printf("\nO valor de delta é de: %.0f\n", delta);
		printf("O valor da primeira raiz é de: %.0f\n", raiz1);
		printf("O valor da segunda raíz é de: %.0f\n", raiz2);
	}
}
