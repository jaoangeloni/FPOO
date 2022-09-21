#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char mercadorias[5][15];
	float preco[5];
	int i;
	
	//entrada
	printf("Digite os nomes e preços de 5 mercadorias:\n");
	for(i=0;i<5;i++){
		scanf("%s",&mercadorias[i]);
		scanf("%f",&preco[i]);
	}
	
	printf("\n");
	
	system("cls");
	
	printf("[Novo preço]\n\n");
	
	//processamento
	for(i=0;i<5;i++){
		if(preco[i] < 1000){
			preco[i] = preco[i] * 5 / 100 + preco[i];
		}else{
			preco[i] = preco[i] * 7 / 100 + preco[i];	
		}
		printf("%s - R$%.2f\n", mercadorias[i], preco[i]);
	}
	

}


