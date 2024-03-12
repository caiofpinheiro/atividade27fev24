#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int par = 0, impar = 0, numero = 1, i, somaPar = 0, somaGeral = 0, contador;
	float mediaPar, soma = 0, mediaGeral;
	
	while(numero != 0){
		printf("Digite números: ", i);
		scanf("%i",&numero);
		
			if(numero % 2 == 0){
			par = par +1;
			somaPar = somaPar + numero;
		} else {
			impar++;
		}
		
		somaGeral = somaGeral + numero;
		
		contador++;
	}
		if (contador == 0){
			printf("\nNenhum número par");
		} else {
		
		mediaPar = somaPar / par;
		mediaGeral = somaGeral / contador;
	}
	
	printf("\n>>>Exibindo ao usuário <<<\n");
	printf("\nQuantidades de numero par: %i", par);
	printf("\nQuantidades de números impares: %i", impar);
	printf("\nMedia dos numeros pares: %.1f", mediaPar);
	printf("\nMedia geral dos números: %.1f", mediaGeral);
	
	
	
	return 0;
}
