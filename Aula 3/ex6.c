/*Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 900 km/h,
fa�a um programa que leia uma dist�ncia (km), calcule e apresente na tela,
quanto tempo (horas) ser� necess�rio para um 747-300 sobrevoar a dist�ncia informada.
*/

#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	float distancia, tempo;
	
	//entrada
	printf("A velocidade de um avi�o 747-900 � de 900 km/h. \n\n");
	printf("Digite uma dist�ncia para o 747-900 sobrevoar em km:\n");
	scanf("%f", &distancia);
	
	//processamento
	tempo = distancia / 900;
	
	//sa�da
	printf("\nO tempo que o 747-900 levar� para percorrer %.0f km � de %.1f horas", distancia, tempo);
	
}
