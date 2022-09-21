/*Desenvolva um programa que leia o nome de uma cidade, o número total de eleitores
e o número total de votos apurados na última eleição. O programa deverá calcular e exibir
a porcentagem de participação dos eleitores desta cidade na última eleição.
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
	
	//saída
	printf("\n\nNa cidade de %s um total de %.2f %% de eleitores votaram.", nome, participacao);
	
}
