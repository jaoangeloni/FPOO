/*esenvolva um programa que leia o nome de um time de futebol, o n�mero de vit�rias
 e o n�mero de empates. O programa dever� calcular e apresentar na tela, o nome do time
  e o total de pontos. Lembrando que a vit�ria vale 3 pontos e o empate vale 1 ponto.
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
	printf("Digite o n�mero de vit�rias:");
	scanf("%d", &v);
	printf("Digite o n�mero de empates:");
	scanf("%d", &e);
	
	//processamento
	t = (v * 3) + e;
	
	//sa�da
	printf("Total de pontos de %s: %d", time, t);
}
