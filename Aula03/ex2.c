/*
	Desenvolva um programa que leia a velocidade de um carro (km/h)
	e a dist�ncia a ser percorrida (km) por ele. Calcule e apresente 
	na tela, quanto tempo (horas) ser� necess�rio para o carro percorrer a dist�ncia informada.
*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	float a,b,c;
	//entrada
	printf("Digite a velocidade do carro em km/h:");
	scanf("%f",&a);
	printf("Digite a dist�ncia percorrida em km:");
	scanf("%f",&b);
	//processamento
	c = b / a;
	printf("O tempo que o carro levou � de: %.1f", c); printf(" horas");
	//sa�da
}

