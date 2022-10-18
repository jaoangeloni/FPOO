#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int i = 11;
	
	for(i = 11; i < 200; i++){
		printf("%d\n", i);
	}
}
