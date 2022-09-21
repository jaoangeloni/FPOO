#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float salario,reajuste,novosalario;
	
	//entrada
	
	printf("Digite seu salário: R$");
	scanf("%f", &salario);
	
	//processamento e saída
	
	if(salario <= 280){
		reajuste = (salario*20)/100;
		novosalario = reajuste + salario;
		printf("\nSalário anterior: R$%.2f\n", salario);
		printf("Percentual aplicado: 20%%\n");
		printf("Valor do reajuste: R$%.2f\n", reajuste);
		printf("O novo salário é de: R$%.2f\n", novosalario);
	}else if(salario < 700){
			reajuste = (salario*15)/100;
		novosalario = reajuste + salario;
		printf("\nSalário anterior: R$%.2f\n", salario);
		printf("Percentual aplicado: 15%%\n");
		printf("Valor do reajuste: R$%.2f\n", reajuste);
		printf("O novo salário é de: R$%.2f\n", novosalario);
	}else if(salario < 1500){
			reajuste = (salario*10)/100;
		novosalario = reajuste + salario;
		printf("\nSalário anterior: R$%.2f\n", salario);
		printf("Percentual aplicado: 10%%\n");
		printf("Valor do reajuste: R$%.2f\n", reajuste);
		printf("O novo salário é de: R$%.2f\n", novosalario);
	}else{	
		reajuste = (salario*5)/100;
		novosalario = reajuste + salario;
		printf("\nSalário anterior: R$%.2f\n", salario);
		printf("Percentual aplicado: 5%%\n");
		printf("Valor do reajuste: R$%.2f\n", reajuste);
		printf("O novo salário é de: R$%.2f\n", novosalario);
	}
}
