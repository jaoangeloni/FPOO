#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float i,j;
	
	//entrada
	
	printf("Loja Quase Dois - Tabela de pre�os: \n\n");
	
	//processamento e sa�da
	
	for(i>0; i<50 ; i++){
		j = j + 1.99;
		printf("%.0f - R$%.2f\n", i, j);
	
}
}
