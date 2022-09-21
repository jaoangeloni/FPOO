#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"");
	int v[100];
	int i, j;
	int aux;
	
	
	//entrada
	for(i = 0; i < 100; i++){
		v[i] = rand()%1000;
	}
	
	//processamento
	for (i = 0; i < 100 ; i++){
		for( j = i + 1; j < 100; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	//saída
	for(i = 0; i < 100; i++){
		printf("[%d.]%d\n", i+1,v[i]);
	}
}
