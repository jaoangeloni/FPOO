#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	float salario;
	
	//entrada
	printf("Digite seu salário: ");
	printf("R$");scanf("%f", &salario);
	
	//processamento e saída
	if (salario <= 1500){
		salario = salario + (salario * 15)/100;
		printf("Você recebeu um reajuste de 15%%, seu novo salário é de R$%.2f", salario);
	}else if(salario <= 1750){
		salario = salario + (salario * 12)/100;
		printf("Você recebeu um reajuste de 12%%, seu novo salário é de R$%.2f", salario);
	}else if(salario <= 2000){
		salario = salario + (salario * 9)/100;
		printf("Você recebeu um reajuste de 9%%, seu novo salário é de R$%.2f", salario);
	}else{
		salario = salario + (salario * 6)/100;
		printf("Você recebeu um reajuste de 6%%, seu novo salário é de R$%.2f", salario);
	}
}
