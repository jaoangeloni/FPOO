#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int peca;
	float preco, camisa, bermuda, calca;
	
	//entrada
	printf("Escolha a peça que você irá comprar:\n");
	printf("[1.Camisa ]\n[2.Bermuda]\n[3.Calça  ]\n");
	scanf("%d", &peca);
	printf("Digite o preço da peça em R$\n");
	scanf("%f", &preco);
	
	//processamento e saída
	
	camisa = preco - (preco*20)/100;
	bermuda = preco -(preco*10)/100;
	calca = preco - (preco*15)/100;
	
	switch(peca){
		case 1:
			printf("O preço da camisa com desconto é de R$%.2f", camisa);
			break;
		case 2:
			printf("O novo preço da bermuda com desconto é de R$%.2f", bermuda);
			break;
		case 3:
			printf("O novo preço da calça com desconto é de R$%.2f", calca);
			break;
		default:
			printf("Opção inválida");
	}
	
		
}
