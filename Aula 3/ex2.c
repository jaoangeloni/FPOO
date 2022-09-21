/*
	Desenvolva um programa que leia a velocidade de um carro (km/h)
	e a distância a ser percorrida (km) por ele. Calcule e apresente 
	na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.
*/
#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	float a,b,c;
	//entrada
	printf("Digite a velocidade do carro em km/h:");
	scanf("%f",&a);
	printf("Digite a distância percorrida em km:");
	scanf("%f",&b);
	//processamento
	c = b / a;
	printf("O tempo que o carro levou é de: %.1f", c); printf(" horas");
	//saída
}

