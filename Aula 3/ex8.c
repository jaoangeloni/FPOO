/*Desenvolva um programa que leia o raio (cm) e a altura (cm)
de um cilindro. Calcule e mostre a �rea (cm2) e o volume (cm3) do cilindro.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float raio, altura, at, volume;
	
	//entrada
	printf("Para descobrir a �rea e volume do cilindro, digite:\n\n");
	printf("-Raio do cilindro(cm):");
	scanf("%f", &raio);
	printf("-Altura do cilindro(cm):");
	scanf("%f", &altura);
	
	//processamento
	const float PI = 3.14;
	at = (2 * PI * raio * altura) + 2 * (PI * raio * raio);
	volume = PI * (raio * raio * altura);
	
	//sa�da
	printf("\nA �rea total de um cilindro com raio %.2f cm e altura %.2f cm � de aproximadamente:\n%.2f cm�", raio, altura, at);
	printf("\n\nO volume de um cilindro com raio %.2f cm e altura %.2f cm � de aproximadamente:\n%.2f cm�", raio ,altura , volume);
}

