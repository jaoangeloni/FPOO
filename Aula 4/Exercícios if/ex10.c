#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	int a,b,c;
	float media;
	
	//entrada
	printf("Digite a nota 1:\n");
	scanf("%d", &a);
	printf("Digite a nota 2:\n");
	scanf("%d", &b);
	printf("Digite a nota 3:\n");
	scanf("%d", &c);
	
	//processo e saída
	
	media = (a + b + c)/3;
	printf("\nA média é %.1f\n\n", media);
	
	if (media >= 6){
		printf("O aluno foi aprovado");
	}else if (media >= 4){
		printf("O aluno está de recuperação");
	}else{
		printf("O aluno foi reprovado");
	}
	
}
