#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>


#define tam 4
#define qtd 3

int main(){
	setlocale(LC_ALL,"");

	float numeros[tam][qtd];
	float soma = 0, media[2];
	int i, j;
	char nomes[2][200];
	
	
	for(i = 0; i < tam; i++){
		printf("Digite o nome do %i� aluno: ", i+1);
		scanf("%s",&nomes[i]);
		
		for(j = 0; j < qtd; j++){
			printf("%d� Nota: ", j + 1);
			scanf("%f",&numeros[i][j]);
			
			soma += numeros[i][j];
			
		}
		
		media[i] = soma/j;
		soma = 0;
		
	}
	
	printf("\n >>> Exibindo resultado <<< \n");
	for(i = 0; i < tam; i++){
		printf("%i� aluno: %s \n\n", i + 1, nomes[i]);
		
		for(j = 0; j < qtd; j++){
			printf("%i� nota: %.1f \n\n", j + 1, numeros[i][j]);
			
		}
		
		printf("\nM�dia: %.1f \n", media[i]);
	}	
	
	return 0;
}
