/*Desenvolva um programa que leia o nome de uma cidade, o n�mero total de eleitores
e o n�mero total de votos apurados na �ltima elei��o. O programa dever� calcular e exibir
a porcentagem de participa��o dos eleitores desta cidade na �ltima elei��o.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome [20];
	int eleitores, votos;
	float participacao;
	
	
	//entrada
	printf("Nome da cidade:");
	scanf("%s", &nome);
	printf("Total de eleitores:");
	scanf("%d", &eleitores);
	printf("Total de votos:");
	scanf("%d", &votos);
	
	//processamento
	participacao = (votos * 100) / eleitores;
	
	//sa�da
	printf("\n\nNa cidade de %s um total de %.2f %% de eleitores votaram.", nome, participacao);
	
}
