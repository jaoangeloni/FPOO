#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int cor;
	
	//entrada
	printf("Digite a cor do semáforo \n[1.verde   ]\n[2.amarelo ]\n[3.vermelho]\n\n");
	scanf("%d", &cor);
	
	//processamento e saída
	if (cor == 1){
		printf("\nVocê pode ir");
	}else if (cor == 2){
		printf("\nVocê deve esperar");
	}else if (cor == 3){
		printf("\nVocê deve parar");
	}else{
		printf("Opção inválida");
	}
	printf("\n\nFim.");
}
