#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void verificarPositivoOuNegativo(numero) {
	if(numero == 0) {
		printf("Zero é neutro.");
	} else if (numero > 0) {
		printf("Positivo.");
	} else {
		printf("Negativo.");
	}
}

int main(){
	setlocale(LC_ALL,"");
	
	int numero;
	
	printf("DIGITE UM NÚMERO: ");
	scanf("%i",&numero);
	
	verificarPositivoOuNegativo(numero);
	
	return 0;
	
}
