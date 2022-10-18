#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int cor, alcool;
	
	//entrada
	printf("Digite a cor do semáforo \n[1.verde   ]\n[2.amarelo ]\n[3.vermelho]\n");
	scanf("%d",&cor);
	printf("Você ingeriu bebia alcoólica?\n[1.Sim]\n[2.Não]\n");
	scanf("%d",&alcool);
	
	//processamento
	switch(cor){
		case 1:
			printf("Você escolheu verde então pode ir.\n");
			break;
		case 2:
			printf("Você escolheu amarelo então fique atento.\n");
			break;
		case 3:
			printf("Você escolheu vermelho então espere.\n");
			break;
		default:
			printf("Opção inválida\n");
	}
	printf ("\nFim.");
}
