#include<stdio.h>
#include<locale.h>
#include<time.h>

int sorteio();

int main(){
	setlocale(LC_ALL,"");
	char nome[10][10];
	int i;
	for(i=0;i<10;i++){
		printf("Digite o %dº nome:\n",i+1);
		scanf("%s",&nome[i]);
	}
	int sorteado = sorteio();
	printf("O nome sorteado foi:\n%s",nome[sorteado]);
}

int sorteio(){
	srand(time(NULL));
	return rand()%10;
}
