#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int vetor[6];
	int i,x=5;
	
	for(i = 0; i < 6 ; i++){
		printf("Digite um n�mero: ");
		scanf("%d", &vetor[i]);
	}
	
	printf("\nO vetor �: ");
	
	for(i = 0; i < 6 ; i++){
		printf("%d ", vetor[5-i]);
	}
}

