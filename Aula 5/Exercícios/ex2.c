#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i = 199;
	int tab;
	
	for(i; i >1; i--){
		printf("%d\n", i);
	}
	if(tab=i){
	printf("\n");
	tab -=10;
	}
	else printf("\t");
}
