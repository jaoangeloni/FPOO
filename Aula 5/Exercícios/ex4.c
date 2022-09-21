#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i,x;
	
	printf("Digite um valor:\n");
	scanf("%d", &i);
	printf("Digite outro valor:\n");
	scanf("%d", &x);
	
	while(x<=i){
		printf("%d\n",x);
		x++;
	}
	
		while(i<=x){
		printf("%d\n",i);
		i++;
	}
}
