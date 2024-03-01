#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	
	int opcao;
	
	printf("\n\t>> MENU << ");
	printf("\n 1 - Picanha \t\t R$ 25,00");
	printf("\n 2 - Lasanha \t\t R$ 20,00");
	printf("\n 3 - Strogonoff \t R$ 10,00");
	
	printf("\nDigite uma opção: ");
	scanf("%i",&opcao);
	
	switch(opcao){
	
	 case 1:
	 	printf("\nPicanha R$25,00");
	 	break;
	 
	 case 2:
	 	printf("\nLasanha R$20,00");
	 	break;
	 
	 case 3:
	 	printf("\nStrogonoff R$10,00");
	 	break;
	 
	 default :
	 	printf("Opção Inválida.");
}
}
