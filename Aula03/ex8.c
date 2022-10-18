/*Desenvolva um programa que leia o raio (cm) e a altura (cm)
de um cilindro. Calcule e mostre a área (cm2) e o volume (cm3) do cilindro.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float raio, altura, at, volume;
	
	//entrada
	printf("Para descobrir a área e volume do cilindro, digite:\n\n");
	printf("-Raio do cilindro(cm):");
	scanf("%f", &raio);
	printf("-Altura do cilindro(cm):");
	scanf("%f", &altura);
	
	//processamento
	const float PI = 3.14;
	at = (2 * PI * raio * altura) + 2 * (PI * raio * raio);
	volume = PI * (raio * raio * altura);
	
	//saída
	printf("\nA área total de um cilindro com raio %.2f cm e altura %.2f cm é de aproximadamente:\n%.2f cm²", raio, altura, at);
	printf("\n\nO volume de um cilindro com raio %.2f cm e altura %.2f cm é de aproximadamente:\n%.2f cm³", raio ,altura , volume);
}

