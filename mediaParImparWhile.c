#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int par = 0, impar = 0, numero = 1, i, somaPar = 0, somaGeral = 0, contador;
	float mediaPar, soma = 0, mediaGeral;
	
	while(numero != 0){
		printf("Digite n�meros: ", i);
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
			printf("\nNenhum n�mero par");
		} else {
		
		mediaPar = somaPar / par;
		mediaGeral = somaGeral / contador;
	}
	
	printf("\n>>>Exibindo ao usu�rio <<<\n");
	printf("\nQuantidades de numero par: %i", par);
	printf("\nQuantidades de n�meros impares: %i", impar);
	printf("\nMedia dos numeros pares: %.1f", mediaPar);
	printf("\nMedia geral dos n�meros: %.1f", mediaGeral);
	
	
	
	return 0;
}
