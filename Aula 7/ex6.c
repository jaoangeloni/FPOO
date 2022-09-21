#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int v[5];
	int i, j;
	int aux;
	
	//entrada
	printf("Digite 5 números inteiros: \n");
	for(i = 0; i < 5; i++){
		scanf("%d",&v[i]);
	}
	
	//processamento
	for (i = 0; i < 5 ; i++){
		for( j = i + 1; j < 5; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	//saída
	for(i = 0; i < 5; i++){
		printf("[%d.]%d\n", i+1,v[i]);
	}
}
