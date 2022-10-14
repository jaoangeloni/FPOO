#include<stdio.h>
#include<locale.h>
#include<time.h>

int calc(int ano);

int main(){
	setlocale(LC_ALL,"");
	int dia, mes, ano, idade;
	
	printf("Digite sua data de nasciento(DD/MM/AAAA)\n");
		scanf("%d",&dia);
		scanf("%d",&mes);
		scanf("%d",&ano);
	
	idade = calc(ano);
	
	printf("Você tem %d anos", idade);
}

int calc(int ano){
	return 2022 - ano;
}
