#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

#define TAM 6
int main(){
	setlocale(LC_ALL,"");
	
	int par = 0, impar = 0;
	int i;
	int numeros[TAM];
	
	for(i = 0; i < TAM;i++){
		printf("Digite os n�meros: ");
		scanf("%i",&numeros[i]);
		
		if(numeros[i] % 2 == 0){
			par = par + 1;
		} else {
			impar++;
		}
	}
		system("cls || clear");
		printf("\n>>> Exibindo n�meros ao usu�rio <<<");
		printf("\nQuantidade de n�meros pares: %i", par);
		printf("\nQuantidade de n�meros impares: %i", impar);
		
	return 0;
}
