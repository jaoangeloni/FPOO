#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int valores = -1;
	int cont;
	int acumulador = 0;
	for(cont = 0; cont < 15; cont++){
		valores = -1;
		while(valores < 0 || valores > 32767){
			printf("Digite %dº valor: ", cont + 1);
			scanf("%d", &valores);
		}
		acumulador += valores;
	}
	printf("a soma dos 15 valores digitados é de %d", acumulador);
}
