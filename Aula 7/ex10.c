#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[5][20];
	float nota1[5], nota2[5];
	float media[5];
	int i;

	for(i = 0; i < 5; i++){
		printf("Digite o nome le as duas notas do %dº aluno:\n",i+1);
		scanf("%s",&nome[i]);
		scanf("%f",&nota1[i]);
		scanf("%f",&nota2[i]);
		printf("\n");
	}

	system("cls");
	
	for(i = 0; i < 5; i++){
			media[i] = (nota1[i] + nota2[i]) / 2;
		printf("\[Nome  ]%s\n[Nota 1]%.0f\n[Nota 2]%.0f\n[Média ]%.1f\n---------------------------------------------\n",nome[i],nota1[i],nota2[i],media[i]);
	}
}

