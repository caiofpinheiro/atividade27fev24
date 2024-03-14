#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	int vetor[10];
	int i;
	
	printf("Digite os elementos do vetor:\n");
	
	for(i = 0; i < 10; i++){
		printf("Elemento %d: ", i + 1);
		scanf("%d",&vetor[i]);
		
	}
	
	system("cls");
	
	printf("Exibindo os dados em um vetor em um laço de repetição.");
		for (i = 0; i < 10; i++){
			printf("\nElemento %d: %d\n", i+1, vetor[i]);
		}
		
		return 0;
}
