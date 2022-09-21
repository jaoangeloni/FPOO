#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int vetor[6];
	int i,x=5;
	
	for(i = 0; i < 6 ; i++){
		printf("Digite um número: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("\nO vetor é: ");
	
	for(i = 0; i < 6 ; i++){
		printf("%d ", vetor[5-i]);
	}
}

