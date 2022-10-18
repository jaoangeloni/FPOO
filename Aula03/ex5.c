/*Desenvolva um programa que leia um número ”n” inteiro, positivo
e diferente de zero e apresente na tela: n – 1, e também n + 1.
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int x, y, z;
	
	//entrada
	printf("Digite um número:\n");
	scanf("%d", &x);

	//processamento
	y = x + 1;
	z = x - 1;
	
	//saída
	printf("%d - 1= %d \n", x,z);
	printf( "%d + 1 = %d", x,y);
}
