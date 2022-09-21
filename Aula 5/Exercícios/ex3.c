#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i, j=1;
	
	printf("Digite um valor:\n");
	scanf("%d", &i);
	
	while(j<i){
		printf("%d\n",j);
		j++;
	}
}
