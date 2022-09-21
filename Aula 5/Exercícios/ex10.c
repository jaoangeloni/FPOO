#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"");
	int i;
	for(i = 11 ; i < 250; i++){
			if(i % 2 == 0){
			printf("%d ", i);
		}
	}
	
}
