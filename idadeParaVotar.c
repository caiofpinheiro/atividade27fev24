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
		printf("Obrigat�rio Votar.");
		
	} else {
		printf("N�o � obrigado a votar.");
	}
	
	
	
	return 0;
}
