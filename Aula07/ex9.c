#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int matriz[5][5];
	int i,j, qtdpar = 0,qtdimpar = 0;

	for(i = 0; i<5 ; i++)
		for(j = 0; j<5 ; j++)
			matriz[i][j] = rand()%51;
			
	for(i = 0; i<5 ; i++){
		for(j = 0; j<5 ; j++){
			if(matriz[i][j] < 10) 
				printf("[0%d]", matriz[i][j]);
			else
				printf("[%d]", matriz[i][j]);
			}
		printf("\n");
	}
		printf("\n");
	for(i = 0; i<5 ; i++){
		for(j = 0; j<5 ; j++){
			if(matriz[i][j] % 2 == 0){
				printf("[%d]", matriz[i][j]);
				qtdpar++;
			}
		}
	}
	printf(" Temos %d pares",qtdpar);
	
		printf("\n\n");
	for(i = 0; i<5 ; i++){
		for(j = 0; j<5 ; j++){
			if(matriz[i][j] % 2 != 0){
				printf("[%d]", matriz[i][j]);
				qtdimpar++;
			}
		}
	}
	printf(" Temos %d ímpares",qtdimpar);
}

