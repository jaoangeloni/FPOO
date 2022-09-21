#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char cidade[5][15];
	int eleitores[5];
	int votos[5];
	float porcentagem[5];
	int i;
	
	//entrada
	printf("Digite os nomes de 5 cidades:\n");
	for(i=0;i<5;i++){
		scanf("%s",&cidade[i]);
	}

	printf("\n[Eleitores]\n");

	for(i=0;i<5;i++){
		printf("\nDigite a quantidade de eleitores de %s: ", cidade[i]);
		scanf("%d",&eleitores[i]);
	}
	
	printf("\n[Votos apurados]\n");
	
	for(i=0;i<5;i++){
		printf("\nDigite a quantidade de votos apurados de %s: ", cidade[i]);
		scanf("%d",&votos[i]);
	}
	
	//processamento e saída
	system("cls");
	printf("[Porcentagem de participação por cidade]\n");
	
	for(i=0;i<5;i++){
	porcentagem[i] = (votos[i]*100)/ eleitores[i];
	printf("\nA porcentagem de participação de eleitores de %s é %.0f%%\n", cidade[i],porcentagem[i]);		
	}
}


