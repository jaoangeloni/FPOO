#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL,"");
	
	float a,b,c,delta;
	float raiz1, raiz2;
	
	//entrada
	
	printf("Calculadora de ra�zes de equa��es de 2� grau\n\n");
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
	
	
	//sa�da
	
	if(a == 0){
		printf("N�o � uma equa��o de segundo grau.\n");
		system("pause");
	}else if(delta < 0){
		printf("A equa��o n�o possu� valores reais.\n");
		system("pause");
	}else{
		printf("\nO valor de delta � de: %.0f\n", delta);
		printf("O valor da primeira raiz � de: %.0f\n", raiz1);
		printf("O valor da segunda ra�z � de: %.0f\n", raiz2);
	}
}
