//Contar até 10

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int i = 0;
	for (i = 0; i <= 10; i += 2){
	printf("%d\n",i);
}
  printf("___________\n");
  
	int j = 0;
	while (j <= 10){
	printf("\n%d",j);
	j += 2;
	}	
}
