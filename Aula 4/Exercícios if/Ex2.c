#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	float salario, nsalario;
	int filhos;	
	
	//entrada
	printf("Digite seu sal�rio em R$\n");
	scanf("%f",&salario);
	printf("Quantos filhos voc� tem?\n");
	scanf("%d",&filhos);
	
	//processamento e sa�da
	
	nsalario = salario + 45 * filhos;
	
	if (salario<2000){
		printf("Voc� receber� um sal�rio fam�lia.\nSeu novo sal�rio � de R$%.2f", nsalario);
	}else{
		printf("Voc� n�o receber� sal�rio fam�lia.\nSeu sal�rio � de R$%.2f", salario);
	}
}
