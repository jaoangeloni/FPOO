#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	float salario, nsalario;
	int filhos;	
	
	//entrada
	printf("Digite seu salário em R$\n");
	scanf("%f",&salario);
	printf("Quantos filhos você tem?\n");
	scanf("%d",&filhos);
	
	//processamento e saída
	
	nsalario = salario + 45 * filhos;
	
	if (salario<2000){
		printf("Você receberá um salário família.\nSeu novo salário é de R$%.2f", nsalario);
	}else{
		printf("Você não receberá salário família.\nSeu salário é de R$%.2f", salario);
	}
}
