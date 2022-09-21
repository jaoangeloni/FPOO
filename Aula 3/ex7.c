/*Um caminhão consegue transportar 18 toneladas de laranjas em uma viagem que faz entre a fazenda
e a fábrica de suco de laranja. Um alqueire de terra produz em média 250 toneladas de laranjas.
Faça um programa que leia quantos caminhões e quantos alqueires uma fazenda produtora de laranjas possui,
calcule e apresente na tela quantas viagens de caminhão serão necessárias para transportar toda a colheita de laranjas.
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	float caminhao, alqueire, caminhoes, alqueires, viagens;
	
	//entrada
	printf("Quantidade de caminhões que a fazenda de laranjas possui(18t/caminhão):\n");
	scanf("%f", &caminhao);
	printf("Quantidade de alqueires que a fazenda de laranjas possui(250t/alqueire):\n");
	scanf("%f", &alqueire);
	
	//processamento
	caminhoes = caminhao * 18;
	alqueires = alqueire * 250;
	viagens = alqueires / caminhoes;
	
	
	//saída
	printf("Serão necessárias aproximadamente %.1f viagens para transportar toda a colheita.", viagens);

	}
