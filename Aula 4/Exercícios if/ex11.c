#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int peca;
	float preco, camisa, bermuda, calca;
	
	//entrada
	printf("Escolha a pe�a que voc� ir� comprar:\n");
	printf("[1.Camisa ]\n[2.Bermuda]\n[3.Cal�a  ]\n");
	scanf("%d", &peca);
	printf("Digite o pre�o da pe�a em R$\n");
	scanf("%f", &preco);
	
	//processamento e sa�da
	
	camisa = preco - (preco*20)/100;
	bermuda = preco -(preco*10)/100;
	calca = preco - (preco*15)/100;
	
	switch(peca){
		case 1:
			printf("O pre�o da camisa com desconto � de R$%.2f", camisa);
			break;
		case 2:
			printf("O novo pre�o da bermuda com desconto � de R$%.2f", bermuda);
			break;
		case 3:
			printf("O novo pre�o da cal�a com desconto � de R$%.2f", calca);
			break;
		default:
			printf("Op��o inv�lida");
	}
	
		
}
