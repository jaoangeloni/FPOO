#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a,b;
	
	//entrada
	printf("Digite um n�mero:\n");
	scanf("%d", &a);
	printf("Digite outro n�mero:\n");
	scanf("%d", &b);
	
	//processamento e sa�da
	
	if (a>b){
		printf("O maior n�mero � %d\n", a);
		printf("O menor n�mero � %d", b);
	}else{
		printf("O maior n�mero � %d\n", b);
		printf("O menor n�mero � %d", a);
	}
	
}
