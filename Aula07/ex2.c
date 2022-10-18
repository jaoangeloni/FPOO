#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char times [5][15];
	int vitorias[5];
	int empates[5];
	int pontos[5];
	int i,j,aux;
	char auxt[15];
	
	//entrada
	printf("Digite os nomes dos 5 times:\n");
	for(i=0;i<5;i++){
		scanf("%s",&times[i]);
	}
	
	system("cls");
	
	for(i=0;i<5;i++){
		printf("Digite a quantidade de vitórias de %s:\n",times[i]);
		scanf("%d", &vitorias[i]);
		printf("\n");
	}
	
	system("cls");
	
	for(i=0;i<5;i++){
		printf("Digite a quantidade de empates de %s:\n",times[i]);
		scanf("%d",&empates[i]);
		printf("\n");
	}
	
	system("cls");
	printf("\n");
	
	//processamento
	for(i=0;i<5;i++){
		pontos[i] = (vitorias[i]*3)+ empates[i];
	}
	
	for (i = 0; i < 5 ; i++){
		for( j = i + 1; j < 5; j++){
			if(pontos[i] < pontos[j]){
				aux = pontos[i];
				pontos[i] = pontos[j];
				pontos[j] = aux;
				strcpy(auxt, times[i]);
				strcpy(times[i], times[j]);
				strcpy(times[j], auxt);
			}
		}
	}
	
	//saída
	for(i = 0; i < 5; i++){
		printf("[%s] - %d\n",times[i],pontos[i]);
	}
}
