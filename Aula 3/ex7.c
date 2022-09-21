/*Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem que faz entre a fazenda
e a f�brica de suco de laranja. Um alqueire de terra produz em m�dia 250 toneladas de laranjas.
Fa�a um programa que leia quantos caminh�es e quantos alqueires uma fazenda produtora de laranjas possui,
calcule e apresente na tela quantas viagens de caminh�o ser�o necess�rias para transportar toda a colheita de laranjas.
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	float caminhao, alqueire, caminhoes, alqueires, viagens;
	
	//entrada
	printf("Quantidade de caminh�es que a fazenda de laranjas possui(18t/caminh�o):\n");
	scanf("%f", &caminhao);
	printf("Quantidade de alqueires que a fazenda de laranjas possui(250t/alqueire):\n");
	scanf("%f", &alqueire);
	
	//processamento
	caminhoes = caminhao * 18;
	alqueires = alqueire * 250;
	viagens = alqueires / caminhoes;
	
	
	//sa�da
	printf("Ser�o necess�rias aproximadamente %.1f viagens para transportar toda a colheita.", viagens);

	}
