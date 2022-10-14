#include<stdio.h>
#include<locale.h>
#include<time.h>

void sorteio(int x);
int vetor[10];

int main(){
	setlocale(LC_ALL,"");
	char nome[10][10];
	int i, x;
	for(i=0;i<10;i++){
		printf("Digite o %dº nome:\n",i+1);
		scanf("%s",&nome[i]);
	}
	printf("\nDigite quantos nomes deseja sortear: ");
	scanf("%d", &x);
	
	sorteio(x);
	
	for(i=0; i<x; i++){
		printf("\nO nome sorteado foi: %s",nome[vetor[i]]);
	}
}

void sorteio(int x){
	srand(time(NULL));
	int i;
	for(i = 0; i < x ;i++){
		vetor[i] = rand()%10;
		for(i = 0; i < x; i++){
			if(vetor[i] == ){vetor[i] = rand()%10;
			}else break;
		}
	}
}
