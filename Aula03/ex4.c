/*esenvolva um programa que leia o nome de um time de futebol, o número de vitórias
 e o número de empates. O programa deverá calcular e apresentar na tela, o nome do time
  e o total de pontos. Lembrando que a vitória vale 3 pontos e o empate vale 1 ponto.
  */

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	char time[10];
	int v, e, t;
	
	//entrada
	printf("Digite o nome do time:");
	scanf("%s", &time);
	printf("Digite o número de vitórias:");
	scanf("%d", &v);
	printf("Digite o número de empates:");
	scanf("%d", &e);
	
	//processamento
	t = (v * 3) + e;
	
	//saída
	printf("Total de pontos de %s: %d", time, t);
}
