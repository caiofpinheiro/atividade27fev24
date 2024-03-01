#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL,"");
	
	int idade;
	
	printf ("Digite sua Idade: ");
	scanf("%i",&idade);
	
	if(idade >= 18 && idade <= 65){
		printf("Obrigatório Votar.");
		
	} else {
		printf("Não é obrigado a votar.");
	}
	
	
	
	return 0;
}
