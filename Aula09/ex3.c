#include<stdio.h>
#include<locale.h>
#include<time.h>

int sorteio(int x);

int main(){
	setlocale(LC_ALL,"");
	char time[40][20];
	int i, x;
	for(i = 0;i<40; i++){
		printf("Digite o %dº time que irá participar:\n", i+1);
		scanf("%s",&time[i]);
	}
	system("cls");
	
	printf("Digite quantos times cada grupo deve ter: ");
	scanf("%d", &x);
	
	
}

int sorteio(int x){
	return x/40;
}
