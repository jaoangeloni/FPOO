#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char sex;
	char fem = 'f', mas = 'm';
	int dias,ret;
	
	
	printf("Ol�, por gentileza informe seu sexo. \n[f] para feminino [m] para masculino:\n");
	scanf("%c",&sex);
	
	printf("\nFazem quantos dias desde a sua �ltima doa��o?\n");
	scanf("%d",&dias);
	
	if(sex == fem && dias>89)printf("\nVoc� est� apta para doar novamente!");
	else if(sex == mas && dias>59)printf("\nVoc� est� apto para doar novamente!");
	else printf("\nVoc� deve esperar para doar novamente!");	
}

