#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int cor;
	
	//entrada
	printf("Digite a cor do semáforo \n[1.verde   ]\n[2.amarelo ]\n[3.vermelho]\n");
	scanf("%d",&cor);
	
	//processamento
	switch(cor){
		case 1:
			printf("você escolheu verde então pode ir.\n");
			break;
		case 2:
			printf("você escolheu amarelo então fique atento.\n");
			break;
		case 3:
			printf("você escolheu vermelho então espere.\n");
			break;
		default:
			printf("Opção inválida\n");
	}
	printf ("\nFim.");
}
