#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float area;
	float litro;
	float galao, lata;
	float precogalao, precolata;
	
	//entrada
	
	printf("Digite a área do local a ser pintado em m²: ");
	scanf("%f", &area);
	
	//processamento
	
	litro = area / 6;
	lata = litro / 18;
	galao = litro / 3.6;
	precolata = lata * 80;
	precogalao = galao * 25;
	
	
	//saída
	
	printf("A quantidade necessária de litros é de %.1f\n\n", litro);
	printf("Quantidade de latas: %.1f\n", lata);
	printf("Preço aproximado: R$%.2f\n\n", precolata);
	printf("Quantidade de galões : %.1f\n", galao);
	printf("Preço aproximado: R$%.2f\n\n", precogalao);
	
	
}
