/*Desenvolva um programa que leia o nome e o sal�rio de uma pessoa,
depois leia o valor do �ndice percentual (%) de reajuste do sal�rio.
Calcule e apresente na tela, o valor do novo sal�rio e o nome da pessoa.
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	char nome[10];
	float salario,reajuste,novoSalario;
	
	//entrada
	printf("Digite o nome do funcion�rio: \n");
	scanf("%s", &nome);
	printf ("Digite seu sal�rio: \n");
	scanf ("%f", &salario);
	printf ("�ndice percentual (%%) de reajuste: \n");
	scanf("%f", &reajuste);
	
	//processamento
	novoSalario = salario + salario * reajuste / 100;
	
	//sa�da
	printf("O novo sal�rio de %s � de: %.2f", nome, novoSalario);
	
	}


