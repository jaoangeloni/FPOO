/*Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. O programa dever� calcular
 um aumento de 5% no pre�o da mercadoria e mostrar o nome da mercadoria e o seu novo pre�o.
 */
 #include <stdio.h>
 #include <locale.h>
 
 int main(){
 	setlocale(LC_ALL,"");
 	char nome[20];
 	float preco, npreco;
 	
 	//entrada
 	printf("Calculo de aumento de 5%% em mercadorias\n\n");
 	printf("Digite o nome do produto:\n");
 	scanf ("%s", &nome);
 	printf("Digite o pre�o do produto em R$:\n");
 	scanf("%f", &preco);
 	
 	//processamento
 	npreco = preco + (preco * 0.05);
 	
 	//sa�da
 	printf("\nO novo pre�o de %s � de:%.2f R$", nome, npreco);
 }
