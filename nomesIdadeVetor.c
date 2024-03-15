#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

#define TAM 5
int main(){
	int idade[TAM];
	char nome[200][TAM];
	int i;
	
	for(i = 0; i < TAM; i++){
	
		printf("Digite seu nome: ", i + 1);
		scanf("%s",&nome[i]);
		
		printf("Digite sua idade: ", i + 1);
		scanf("%i",&idade[i]);
				
}

		printf("\n>>> exibindo dados <<<");
		for(i = 0; i < TAM;i++){
		printf("\nNomes e idades: %s %iy", nome[i], idade[i]);
		
	}
	
	return 0;
}
