#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[5][5];
	int idade[5];
	int i;
	printf("Digite o nome e a idade de 5 pessoas");
	for(i = 0; i < 5; i++) 
		scanf("%s%d", &nome[i], &idade[i]);
	for(i = 0; i < 5; i++){
		if(idade[i] < 10)
			printf("%s\t%d\tCriança\n",nome[i], idade[i]);
		else if(idade[i] < 20)
			printf("%s\t%d\tJovem\n",nome[i], idade[i]);
		else if(idade[i] < 60)
			printf("%s\t%d\tAdulto\n",nome[i], idade[i]);
		else
			printf("%s\t%d\tIdoso\n",nome[i], idade[i]);
	}
	
}
