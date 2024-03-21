#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

#define TAM 5
int main(){
	setlocale(LC_ALL,"");
	
	int par = 0, impar = 0, totalNumeros, positivo, negativo;
	int i;
	int numeros[TAM];
	
	for(i = 0; i < TAM;i++){
		printf("Digite os números: ");
		scanf("%i",&numeros[i]);
		
		if(numeros[i] % 2 == 0){
			par = par + 1;
		} else {
			impar++;
		}
	
		if(numeros[i] > 0){
			positivo = positivo + 1;
		} else {
			negativo++;
		} 
	
	
	
	}
	
	
	totalNumeros = par + impar;
	
	
		system("cls || clear");
		printf("\n>>> Exibindo números ao usuário <<<");
		printf("\nQuantidade de números pares: %i", par);
		printf("\nQuantidade de números impares: %i", impar);
		printf("\nQuantidade de números negativos: %i", negativo);
		printf("\nQuantidade de números positivos: %i", positivo);
		printf("\nQuantidade de números inseridos: %i", totalNumeros);
	return 0;
	
}
