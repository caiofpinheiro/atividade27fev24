#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	
	char resposta;
	int contador;
	float soma = 0, media, nota;
	
		do {
		
		printf("Deseja inserir uma nota?: ");
		scanf("%c",&resposta);
		
		resposta = toupper(resposta);
		
		if(resposta != 'N') {
			printf("\nDigite a %dª nota: ", contador + 1);
			scanf("%f",&nota);
			
			soma = soma + nota;
			contador = contador + 1;
		}
				
	} while (resposta != 'N');
	
	media = soma / contador;
	
	printf("\nMédia: %.1f \n", media);
	
	return 0;
}
