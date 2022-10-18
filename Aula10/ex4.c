#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char candidatos[6][20];
	int votos[6],i,j,aux,total=0;
	
	for(i=0;i<6;i++){
		printf("Digite o nome e a quantidade de votos do %dº candidato: ",i+1);
		scanf("%s",&candidatos[i]);
		scanf("%d",&votos[i]);
		total = total + votos[i];
	}
	
	for(i=0;i<6;i++){
		float porcent = votos[i]*100/total;
		printf("[%s] - %.2f%%\n",candidatos[i],porcent);
	}
	
//	for(i = 0; i < 6; i++){
//		for(j = i + 1; j < 10; j++){
//			if(votos[i] > votos[j]){
//				aux = votos[i];
//				votos[i] = votos[j];
//				votos[j] = aux;
//			}
//		}
//	}
//	for(i = 0; i < 6; i++){
//		printf("[%s]:%d\n",candidatos[i],votos[i]);
//	}
}
