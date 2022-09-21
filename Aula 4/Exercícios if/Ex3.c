#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	float salario,salario1,salario2,salario3,salario4,salario5;
	
	//entrada
	printf("Digite seu salário em R$\n");
	scanf("%f",&salario);
	
	//processamento e saída
	
	salario1 =salario - (salario * 7.5)/100;
	
	salario2 =salario - (salario * 9)/100;
	
	salario3 =salario - (salario * 12)/100;
	
	salario4 =salario - (salario * 14)/100;
	
	salario5 = salario - (7087.22 * 14)/100;
	
	if (salario<1212){
		printf("Você terá um desconto de 7,5%% de INSS no salário.\nSeu novo salário é de R$%.2f",salario1);
	}else if(salario<2427.35){
		printf("Você terá um desconto de 9%% de INSS no salário.\nSeu novo salário é de R$%.2f",salario2);
	}else if(salario<3641.03){
			printf("Você terá um desconto de 12%% de INSS no salário.\nSeu novo salário é de R$%.2f",salario3);
	}else if(salario<7087.22){
			printf("Você terá um desconto de 14%% de INSS no salário.\nSeu novo salário é de R$%.2f",salario4);
	}else{
			printf("Você terá um desconto de R$992,21 de INSS no salário.\nSeu novo salário é de R$%.2f",salario5);
	}
}
