/*Desenvolva um programa que leia um n�mero �n� inteiro, positivo
e diferente de zero e apresente na tela: n � 1, e tamb�m n + 1.
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int x, y, z;
	
	//entrada
	printf("Digite um n�mero:\n");
	scanf("%d", &x);

	//processamento
	y = x + 1;
	z = x - 1;
	
	//sa�da
	printf("%d - 1= %d \n", x,z);
	printf( "%d + 1 = %d", x,y);
}
