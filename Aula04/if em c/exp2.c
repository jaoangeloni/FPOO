#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int cor;
	
	//entrada
	printf("Digite a cor do sem�foro \n[1.verde   ]\n[2.amarelo ]\n[3.vermelho]\n\n");
	scanf("%d", &cor);
	
	//processamento e sa�da
	if (cor == 1){
		printf("\nVoc� pode ir");
	}else{
		printf("\nFim.");
	}
}
