#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	float area;
	float litro;
	float galao, lata;
	float precogalao, precolata;
	
	//entrada
	
	printf("Digite a �rea do local a ser pintado em m�: ");
	scanf("%f", &area);
	
	//processamento
	
	litro = area / 6;
	lata = litro / 18;
	galao = litro / 3.6;
	precolata = lata * 80;
	precogalao = galao * 25;
	
	
	//sa�da
	
	printf("A quantidade necess�ria de litros � de %.1f\n\n", litro);
	printf("Quantidade de latas: %.1f\n", lata);
	printf("Pre�o aproximado: R$%.2f\n\n", precolata);
	printf("Quantidade de gal�es : %.1f\n", galao);
	printf("Pre�o aproximado: R$%.2f\n\n", precogalao);
	
	
}
