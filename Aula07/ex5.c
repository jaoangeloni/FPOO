#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char mercadorias[10][15];
	float preco[10],npreco[10];
	float percentual[10],desconto[10];
	int i;

	for(i = 0; i < 10; i++){
		printf("Digite o nome, pre�o e desconto(%%) da %d� mercadoria:\n",i+1);
		scanf("%s",&mercadorias[i]);
		scanf("%f",&preco[i]);
		scanf("%f",&percentual[i]);
		printf("\n");
	}

	system("cls");
	
	for(i = 0; i < 10; i++){
			desconto[i] = (preco[i]*percentual[i])/100;
	npreco[i] = preco[i] - desconto[i];
		printf("%s\n[Pre�o original]R$%.2f\n[Valor do desconto]R$%.2f\n[Pre�o final]%.2f\n---------------------------------------------\n",mercadorias[i],preco[i],desconto[i],npreco[i]);
	}
}

