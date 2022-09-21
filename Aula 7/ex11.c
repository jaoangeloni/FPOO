#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[5][20];
	float peso[5], altura[5];
	float imc[5];
	int i;

	for(i = 0; i < 5; i++){
		printf("Digite o nome, peso(kg) e altura(m) da %dª pessoa\n",i+1);
		scanf("%s",&nome[i]);
		scanf("%f",&peso[i]);
		scanf("%f",&altura[i]);
		printf("\n");
	}

	system("cls");
	
	for(i = 0; i < 5; i++){
		imc[i] = peso[i] /(altura[i] * altura[i]);
		
		if(imc[i] <= 18.8){
				printf("\[Nome  ] %s\n[Peso  ] %.1f kg\n[Altura] %.2f m\n[Imc   ] %.1f\n[Imc   ] Abaixo do peso\n--------------------------------------------\n",nome[i],peso[i],altura[i],imc[i]);
		}else if(imc[i] <= 24.0){
				printf("\[Nome  ] %s\n[Peso  ] %.1f kg\n[Altura] %.2f m\n[Imc   ] %.1f\n[Imc   ] Normal\n--------------------------------------------\n",nome[i],peso[i],altura[i],imc[i]);
		}else if(imc[i] <= 29.9){
				printf("\[Nome  ] %s\n[Peso  ] %.1f kg\n[Altura] %.2f m\n[Imc   ] %.1f\n[Imc   ] Sobrepeso\n--------------------------------------------\n",nome[i],peso[i],altura[i],imc[i]);
		}else if(imc[i] <= 30){
				printf("\[Nome  ] %s\n[Peso  ] %.1f kg\n[Altura] %.2f m\n[Imc   ] %.1f\n[Imc   ] Obesidade\n--------------------------------------------\n",nome[i],peso[i],altura[i],imc[i]);
		}else{
				printf("\[Nome  ] %s\n[Peso  ] %.1f kg\n[Altura] %.2f m\n[Imc   ] %.1f\n[Imc   ] Obesidade grave\n--------------------------------------------\n",nome[i],peso[i],altura[i],imc[i]);
		}
	}
}

