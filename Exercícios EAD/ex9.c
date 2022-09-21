#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i = 1;
	float pao,j;
	
	//entrada
	
	printf("Panificadora Pão de Ontem - Tabela de preços: \n\n");
	printf("Digite o preço da unidade do pão\n");
	scanf("%f", &pao);
	printf("\n");
	
	//processamento e saída
	
	for(i>0; i<50 ; i++){
		j = j + pao;
		printf("%d - R$ %.2f\n",i, j);
	}
	
}

