#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int matriz[5][5];
	int i,j, maior = 0, menor = 26;

	for(i = 0; i<5 ; i++)
		for(j = 0; j<5 ; j++)
			matriz[i][j] = rand()%26;
			
	for(i = 0; i<5 ; i++){
		for(j = 0; j<5 ; j++){
			if(matriz[i][j] < 10) 
				printf("[0%d]", matriz[i][j]);
			else
				printf("[%d]", matriz[i][j]);
			}
		printf("\n");
	}
	
	for(j = 0; j < 5; j++){
		if(matriz[4][j] > maior)
			maior = matriz[4][j];
		if(matriz[4][j] < menor)
			menor = matriz[4][j];
	}
	
	printf("O maior e menor n�mero da linha quatro s�o respectivamente %d e %d\n", maior, menor);
	maior = 0;
	menor = 26;
	
	for(i = 0; i < 5; i++){
		if(matriz[i][3] > maior)
			maior = matriz[i][3];
		if(matriz[i][3] < menor)
			menor = matriz[i][3];
	}
	printf("O maior e menor n�mero da coluna tr�s s�o respectivamente %d e %d\n", maior, menor);
}

