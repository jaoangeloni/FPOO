#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float valor, horas;
	float salarioB, ir, inss, sindicato, salarioL;
	
	//entrada
	printf("Qual o valor recebido por hora?\nR$");
	scanf("%f", &valor);
	printf("Qual o número de horas trabalhadas no mês?\n");
	scanf("%f", &horas);
	
	//processamento
	
	salarioB = valor * horas;
	
	ir = (salarioB * 11)/100;
	
	inss = ((salarioB - ir)*8)/100;
	
	sindicato = ((salarioB - inss - ir)*5)/100;
	
	salarioL = salarioB - ir - inss - sindicato;
	
	//saída
	
	printf("\nSalário Bruto: R$ %.2f\n", salarioB);
	printf("Desconto IR: R$ %.2f\n", ir);
	printf("Desconto INSS: R$ %.2f\n", inss);
	printf("Desconto Sindicato: R$ %.2f\n", sindicato);
	printf("Salário Líquido: R$ %.2f\n", salarioL);
	
}
