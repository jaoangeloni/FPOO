#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[7][20];
	int idade[7],i;

	for(i=0;i<7;i++){
		printf("Olá %dª pessoa, insira seu primeiro nome e idade: ",i+1);
		scanf("%s",&nome[i]);
		scanf("%d",&idade[i]);
	}

	printf("\n");

	for(i=0;i<7;i++){
		if(idade[i]<12)printf("%s, Você é criança.\n",nome[i]);
		else if(idade[i]<17)printf("%s, Você é jovem.\n",nome[i]);
		else if(idade[i]<30)printf("%s, Você é adulto.\n",nome[i]);
		else if(idade[i]<65)printf("%s, Você é de meia idade.\n",nome[i]);
		else printf("%s, Você é idoso.\n",nome[i]);
	}
}
