#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	float notas[3];
	float media, soma = 0;
	int i;
	
	printf("Digita as nota ai\n");
	
	for (i = 0; i < 3; i++){
		printf("Nota %d: ", i + 1);
		scanf("%f",&notas[i]);
		
	}
	
	media = notas[i] / 3;
	
	printf(">>>Exibindo notas<<< \n");
	for(i = 0; i < 3; i++){
		printf("\nNota %d: %.1f\n", i+1, notas[i]);
   }
   
   printf("\nMédia das notas: %.1f", media);

	return 0;
}
