#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int numero = 1, soma = 0, contador = 0;
	float media;
	

	while (numero >= 0 ) {
		printf("Digite o número: ");
		scanf("%i",&numero);
		
			if (numero >= 0){
				soma = soma + numero;
				contador = contador +1;
			}
 	}
 	
 	if(contador == 0){
 		printf("\nNenhum número positivo informado.");
	 } else {
	 	media = soma / contador;
	 }
 	
 	printf("\nMédia dos números: %.1f \n", media);
 	
 	
 	return 0;
}
