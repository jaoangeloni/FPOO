#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int vetor[10];
	int i, num, onde = -1;

	//entrada	
	
	printf("Vetor: ");
	
	for(i = 0; i < 10 ; i++){
		vetor[i] = rand() % 10;
		printf("[%d.]%d  ",i,vetor[i]);
	}
		
	printf("\n\nDigite um n�mero inteiro: \n");
	scanf("%d", &num);
	
	//processamento 
	for(i = 0; i < 10; i++){
		if(vetor[i] == num){
			onde = i;
		}
	}
	
	//sa�da
	if(onde != -1) printf("Encontrei na posi��o %d %d", onde);
	else printf("N�o encontrei");
	
}
