#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
		float preco,npreco;

	//entrada
	printf("Digite o pre�o do produto em R$\n");
	scanf("%f",&preco);
	
	//processamento e sa�da
	
	npreco = (preco*8)/100;
	
	if (preco>1000){
		printf("\nO produto sofreu um desconto de 8%%.\nO novo total � de R$ %.2f", npreco);
	}else{
		printf("\nO total � R$ %.2f", preco);
	}








}
