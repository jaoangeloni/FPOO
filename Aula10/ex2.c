#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[7][20];
	int idade[7],i;

	for(i=0;i<7;i++){
		printf("Ol� %d� pessoa, insira seu primeiro nome e idade: ",i+1);
		scanf("%s",&nome[i]);
		scanf("%d",&idade[i]);
	}

	printf("\n");

	for(i=0;i<7;i++){
		if(idade[i]<12)printf("%s, Voc� � crian�a.\n",nome[i]);
		else if(idade[i]<17)printf("%s, Voc� � jovem.\n",nome[i]);
		else if(idade[i]<30)printf("%s, Voc� � adulto.\n",nome[i]);
		else if(idade[i]<65)printf("%s, Voc� � de meia idade.\n",nome[i]);
		else printf("%s, Voc� � idoso.\n",nome[i]);
	}
}
