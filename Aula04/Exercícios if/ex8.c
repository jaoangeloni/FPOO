#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a,b;
	
	//entrada
	printf("Digite um número:\n");
	scanf("%d", &a);
	printf("Digite outro número:\n");
	scanf("%d", &b);
	
	//processamento e saída
	
	if (a>b){
		printf("O maior número é %d\n", a);
		printf("O menor número é %d", b);
	}else{
		printf("O maior número é %d\n", b);
		printf("O menor número é %d", a);
	}
	
}
