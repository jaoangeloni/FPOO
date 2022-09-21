/*Desenvolva um programa que leia o nome e o preço de uma mercadoria. O programa deverá calcular
 um aumento de 5% no preço da mercadoria e mostrar o nome da mercadoria e o seu novo preço.
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
 	printf("Digite o preço do produto em R$:\n");
 	scanf("%f", &preco);
 	
 	//processamento
 	npreco = preco + (preco * 0.05);
 	
 	//saída
 	printf("\nO novo preço de %s é de:%.2f R$", nome, npreco);
 }
