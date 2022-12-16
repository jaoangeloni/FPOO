#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float peso, exc, multa;
	
	printf("Digite a quantidade de quilos de peixe: \n");
	scanf("%f",&peso);
	
	exc = peso - 50;
	multa = exc * 4;
	
	if(peso > 50){
		
		printf("O excesso foi de %.2f quilos\n", exc);
		printf("Haverá uma multa de R$ %.2f", multa);
		
	}else{
		printf("Não houve excesso, não haverá multa");
	}
	
}
