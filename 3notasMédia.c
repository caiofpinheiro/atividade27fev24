#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float nota, soma = 0, media;
	
	for (i =1; i <=3; i++){
		do{
			printf("Digite a %dª nota: ", i);
			scanf("%f",&nota);
			
		} while(nota <0 || nota >10);
		
		soma = soma + nota; 
	}
	
	media = soma / 3;
	
	printf("\nMédia: %.1f \n", media);
	
	
	if(media >= 7){
		printf("\nAprovado.\n");
	} else if (media  >=5){
		printf("\nRecuperação.\n");
	} else {
		printf("\nReprovado.\n");
	}
	return 0;
}
