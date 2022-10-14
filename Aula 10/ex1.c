#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char sex;
	char fem = 'f', mas = 'm';
	int dias,ret;
	
	
	printf("Olá, por gentileza informe seu sexo. \n[f] para feminino [m] para masculino:\n");
	scanf("%c",&sex);
	
	printf("\nFazem quantos dias desde a sua última doação?\n");
	scanf("%d",&dias);
	
	if(sex == fem && dias>89)printf("\nVocê está apta para doar novamente!");
	else if(sex == mas && dias>59)printf("\nVocê está apto para doar novamente!");
	else printf("\nVocê deve esperar para doar novamente!");	
}

