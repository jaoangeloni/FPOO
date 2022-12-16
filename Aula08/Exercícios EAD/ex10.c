#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float preco;
	float total, troco;
	int i;
	
	printf("Lojas Tabajara\n\n");
	
	for(i=0; i < 10; i++){
		printf("Produto %d - ", i);
		printf("R$ ");
		scanf("%f", preco);
	}
	
	
}

