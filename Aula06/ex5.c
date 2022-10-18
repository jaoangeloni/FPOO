#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int v[10];
	int i, j;
	int aux;
	
	
	//entrada
	for(i = 0; i < 10; i++){
		printf("Digite o %dº valor inteiro: ", i+1);
		scanf("%d",&v[i]);	
	}
	
	//processamento
	for (i = 0; i < 10 ; i++){
		for( j = i + 1; j < 10; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	
	//saída
	for(i = 0; i < 10; i++){
		printf("[%d.]%d\n", i+1,v[i]);
	}
}
