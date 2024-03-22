#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main(){
	
	int numeros[2][2];
	int i, j;
	
	printf("Digite os elementos para matriz a seguir.\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf("Elemento da linha %d coluna %d:  ", i + 1, j + 1);
			scanf("%d",&numeros[i][j]);
		}
	}
	
	
	system("cls || clear");
	printf(">>> Exibindo dados ao cliente <<<\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Elemento da linha %d coluna %d: %d \n", i + 1, j + 1, numeros[i][j]);
		}
	}
	return 0;
}
