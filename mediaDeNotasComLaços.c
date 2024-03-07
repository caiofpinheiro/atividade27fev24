#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, nota;
	float media, soma;
	
	for(i = 1; i <=4; i++){
		printf("Digite a %iª nota: ", i);
		scanf("%i",&nota);
		
	soma = soma + nota;
	media = soma / 4;
	
	}
	
	printf("\n >>> exibindo ao usuário <<<");
	printf("\nMédia: %f", media);
	
	
	return 0;
}
