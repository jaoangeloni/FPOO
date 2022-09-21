#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int a,b,c,d,e,f;
	
	//entrada
	
	printf("Digite 6 números inteiros separados por espaço:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &f);
	
	//processamento
	 if(a > b && a>c && a>d && a>e && a>f){
	printf("O maior nýmero é %d", a);
	 }else if(b>a && b>c && b>d && b>e && b>f){
	printf("O maior número é %d", b);
	 }else if(c>a && c>d && c>e && c>f){
	printf("O maior número é %d", c);
	}else if(d>a && d>c && d>e && d>f){
	printf("O maior número é %d", d);
	}else if(e>a && e>c && e>d && e>f){
	printf("O maior número é %d", e);
	}else{
	printf("O mairo número é %d", f);
	}
}
