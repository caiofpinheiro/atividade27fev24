#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>
#include <limits.h>

#define TAM 5


int main(){
	setlocale(LC_ALL,"");
	
	int numero[TAM];
	int menorNumero = INT_MAX, maiorNumero = INT_MIN;
	int i;
	
	
	for(i = 0; i < TAM; i++){
		printf("Numero %i: ", i + 1);
		scanf("%i",&numero[i]);

	
		if(numero[i] > maiorNumero){
			maiorNumero = numero[i];
		}
		
		if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
	}
	
	printf("\nNúmeros informados: \n");
	for(i = 0; i < TAM; i++){
	printf("Numero %i: %d\n", i + 1, numero[i]);
}
	printf("\nMaior número: %i", maiorNumero);
	printf("\nMenor número: %i", menorNumero);
	
	return 0;
}

