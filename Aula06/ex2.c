#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num[10];
	int i;
	int cont = 0, cont2 = 0;
	float m1, m2;
	int tp = 0,ti = 0;
	
	//entrada
	
	for(i=0; i<10; i++){
		printf("Digite um n�mero: ");
			scanf("%d", &num[i]);
		}
	
	//processamento / cls
	
	system("cls");
	
	printf("O vetor �:\n");
	
	for(i = 0; i < 10; i++){
	  printf("%d ", num[i]);
	}
	
	printf("\n\n");

	//sa�da par
	
	printf("N�meros pares:");
		for(i = 0; i<10; i++){
			if(num[i]%2 == 0){
				printf("%d ",num[i]);
				cont = cont + num[i];
				tp = tp + 1;
			}
	}
	
	m1 = cont/tp;
	
	printf("\nO total de valores pares �: %d", tp);
	printf("\nA soma dos valores pares �: %d", cont);
	printf("\nA m�dia dos valores pares �: %.1f", m1);
	
	printf("\n\n");
	
	//sa�da impar
	
	printf("N�meros �mpares:");
		for(i = 0; i<10; i++){
			if(num[i]%2 != 0){
				printf("%d ",num[i]);
				cont2 = cont2 +num[i];
				ti = ti + 1;
			}
	}
		
	m2 = cont2/ti;
	
	printf("\nO total de valores �mpares �: %d", ti);
	printf("\nA soma dos valores �mpares �: %d", cont2);
	printf("\nA m�dia dos valores �mpares �: %.1f", m2);
}
