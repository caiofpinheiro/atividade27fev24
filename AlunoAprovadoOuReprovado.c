#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, nota;
	float media, soma;
	
	for(i = 1; i <=3; i++){
		printf("Digite a %iª nota: ", i);
		scanf("%i",&nota);
		
	soma = soma + nota;
	media = soma / 3;
	
	}
	

	printf("\n >>> Exibindo ao usuário <<<");
	printf("\nMédia: %.1f", media);
	
	if(media >=7){
		printf("\nAluno aprovado.");
	} else {
		printf("\nAluno de Recuperação.");
	}
	return 0;
}
