/*Desenvolva um programa que leia o nome e o salário de uma pessoa,
depois leia o valor do índice percentual (%) de reajuste do salário.
Calcule e apresente na tela, o valor do novo salário e o nome da pessoa.
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	char nome[10];
	float salario,reajuste,novoSalario;
	
	//entrada
	printf("Digite o nome do funcionário: \n");
	scanf("%s", &nome);
	printf ("Digite seu salário: \n");
	scanf ("%f", &salario);
	printf ("Índice percentual (%%) de reajuste: \n");
	scanf("%f", &reajuste);
	
	//processamento
	novoSalario = salario + salario * reajuste / 100;
	
	//saída
	printf("O novo salário de %s é de: %.2f", nome, novoSalario);
	
	}


