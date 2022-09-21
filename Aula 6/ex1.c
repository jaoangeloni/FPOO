#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int num1[5];
	int num2[5];
	int i = 0;
	
	//primeiro vetor
	
	for(i = 0; i < 5 ; i++){
		printf("Digite um número: ");
		scanf("%d", &num1[i]);
	}
	
	printf("Primeiro vetor: ");
	
	for(i = 0; i < 5; i++){
	  printf("%d ", num1[i]);
	}
	printf("\n\n");
	
	//segundo vetor

	for(i = 0; i < 5 ; i++){
		printf("Digite um número: ");
		scanf("%d", &num2[i]);
	}
	
	printf("Inverso do segundo vetor: ");
	
	for(i = 4; i >= 0; i--){
	printf("%d ", num2[i]);
	}

	printf("\n\n");
	
	//soma 
	
	printf("A soma é: ");
	for(i = 0; i < 5; i++){
	printf("%d ", num1[i]+num2[4-i]);
	}

	
	
}



