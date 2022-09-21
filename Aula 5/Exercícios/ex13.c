#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int a,b,c,d,e;
	int n menor = 32767;
	
	for(i=0;i < 5; i++){
		n = -1;
		while (n < 0 || n > 32767){
			printf("Digite o %dº número: ", i + 1);
			scanf("%d",&n);
		}
		if (n< menor){
			menor = n;
		}
	}
}
