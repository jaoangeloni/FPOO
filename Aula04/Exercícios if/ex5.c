#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[20];
	float preco, mpreco, npreco;
	
	//entrada
	printf("Digite o nome da mercadoria:\n");
	scanf("%s", &nome);
	printf("Digite o pre�o da mercadoria em R$:\n");
	scanf("%f", &preco);
	
	//processamento
	
	mpreco = (preco * 7)/100 + preco;
	npreco = (preco * 5)/100 + preco;

	if(preco > 1000){
		printf("O novo pre�o de %s � R$%.2f",nome, mpreco);
	}else{
		printf("O novo pre�o de %s � R$%.2f",nome, npreco);
	}
}
