#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i = 1;
	float pao,j;
	
	//entrada
	
	printf("Panificadora P�o de Ontem - Tabela de pre�os: \n\n");
	printf("Digite o pre�o da unidade do p�o\n");
	scanf("%f", &pao);
	printf("\n");
	
	//processamento e sa�da
	
	for(i>0; i<50 ; i++){
		j = j + pao;
		printf("%d - R$ %.2f\n",i, j);
	}
	
}

