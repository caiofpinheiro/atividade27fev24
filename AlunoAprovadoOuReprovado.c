#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, nota;
	float media, soma;
	
	for(i = 1; i <=3; i++){
		printf("Digite a %i� nota: ", i);
		scanf("%i",&nota);
		
	soma = soma + nota;
	media = soma / 3;
	
	}
	

	printf("\n >>> Exibindo ao usu�rio <<<");
	printf("\nM�dia: %.1f", media);
	
	if(media >=7){
		printf("\nAluno aprovado.");
	} else {
		printf("\nAluno de Recupera��o.");
	}
	return 0;
}
