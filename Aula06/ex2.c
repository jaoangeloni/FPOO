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
		printf("Digite um número: ");
			scanf("%d", &num[i]);
		}
	
	//processamento / cls
	
	system("cls");
	
	printf("O vetor é:\n");
	
	for(i = 0; i < 10; i++){
	  printf("%d ", num[i]);
	}
	
	printf("\n\n");

	//saída par
	
	printf("Números pares:");
		for(i = 0; i<10; i++){
			if(num[i]%2 == 0){
				printf("%d ",num[i]);
				cont = cont + num[i];
				tp = tp + 1;
			}
	}
	
	m1 = cont/tp;
	
	printf("\nO total de valores pares é: %d", tp);
	printf("\nA soma dos valores pares é: %d", cont);
	printf("\nA média dos valores pares é: %.1f", m1);
	
	printf("\n\n");
	
	//saída impar
	
	printf("Números ímpares:");
		for(i = 0; i<10; i++){
			if(num[i]%2 != 0){
				printf("%d ",num[i]);
				cont2 = cont2 +num[i];
				ti = ti + 1;
			}
	}
		
	m2 = cont2/ti;
	
	printf("\nO total de valores ímpares é: %d", ti);
	printf("\nA soma dos valores ímpares é: %d", cont2);
	printf("\nA média dos valores ímpares é: %.1f", m2);
}
