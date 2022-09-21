#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int a, b, c, d, e;
	int c1, c2, c3, c4, c5, c6;
	
	//entrada
	
	printf("Responda com 1 para sim ou 2 para não\n\n");
	
	//processamento
	
	printf("Você telefonou para a vítima?\n");
	scanf("%d", &a);
	
	c1 = 0;
	
	if(a == 1){
        c2 = c + 1;
    }else if(a == 2){
        c2 = c + 0;
    }else{
    	printf("Valor inválido.\n");
    	system("pause");
	}
    
	printf("\n");
	
	printf("Você esteve no local do crime?\n");
	scanf("%d", &b);
	
	if(b == 1){
        c3 = c2 + 1;
    }else if(b == 2){
        c3 = c2 + 0;
    }else{
       	printf("Valor inválido.\n");
    	system("pause");
	}
	
	printf("\n");
	
	printf("Você mora perto da vítima?\n");
	scanf("%d", &c);
	
	if(c == 1){
        c4 = c3 + 1;
    }else if(c == 2){
        c4 = c3 + 0;
    }else{
        printf("Valor inválido.\n");
    	system("pause");
	}
    
	printf("\n");
	
	printf("Você devia para a vítima?\n");
	scanf("%d", &d);
	
	if(d == 1){
        c5 = c4 + 1;
    }else if(d == 2){
        c5 = c4 + 0;
    }else{
    	printf("Valor inválido.\n");
    	system("pause");
	}
    
	printf("\n");
	
	printf("Você já trabalhou com a vítima?\n");
	scanf("%d", &e);
	
		if(e == 1){
        c6 = c5 + 1;
    }else if(e == 2){
        c6 = c5 + 0;
    }else{
        printf("Valor inválido.\n");
    	system("pause");
	}
	
	//saída
	
	if(c6 == 2){
        printf("\nVocê é suspeito");
    }else if(c6 == 3||c6 == 4){
        printf("\nVocê é cúmplice");
    }else if(c6 == 1){
        printf("\nVocê é inocente");
    }else if(c6 == 5){
        printf("\nVocê é o assassino");
    }else{
        printf("\nVocê é inocente");
    }
}
