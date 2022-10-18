/*Sabendo-se que a velocidade de cruzeiro de um avião 747-300 é de 900 km/h,
faça um programa que leia uma distância (km), calcule e apresente na tela,
quanto tempo (horas) será necessário para um 747-300 sobrevoar a distância informada.
*/

#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	float distancia, tempo;
	
	//entrada
	printf("A velocidade de um avião 747-900 é de 900 km/h. \n\n");
	printf("Digite uma distância para o 747-900 sobrevoar em km:\n");
	scanf("%f", &distancia);
	
	//processamento
	tempo = distancia / 900;
	
	//saída
	printf("\nO tempo que o 747-900 levará para percorrer %.0f km é de %.1f horas", distancia, tempo);
	
}
