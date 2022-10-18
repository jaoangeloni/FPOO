#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int a[8],b[8],c[8],i;

	for(i=0;i<8;i++){
		printf("Digite as medidas dos três lados do %dº triângulo: ",i+1);
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		scanf("%d",&c[i]);
	}
	
	printf("\n");

	for(i=0;i<8;i++){
		if(a[i] == b[i] && b[i] == c[i] && a[i] == c[i])printf("O %dº triângulo é equilátero\n", i+1);
		else if(a[i]!=b[i] && b[i]!=c[i] && a[i]!=c[i])printf("O %dº triângulo é escaleno\n", i+1);
		else printf("O %dº triângulo é isóceles\n", i+1);
	}
}
