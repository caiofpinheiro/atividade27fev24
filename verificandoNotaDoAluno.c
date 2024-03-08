#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	
	int nota;
	char nomeAluno [200], continua;
	
	printf("Digite o seu nome: ");
	scanf("%c",&nomeAluno);
	fflush(stdin);
	
	printf("\nVerificando nota do aluno...\n");
	
	do {
		
		printf("\nDigite a sua note da unidade: ");
		scanf("%i",&nota);
		fflush(stdin);	
	
		if(nota > 10 || nota < 0){
			printf("\nRepetiremos a questão.");
		} else {
			printf("\nParabéns.");
		}
		
	} while (nota < 0 || nota > 10);
	
	printf("\nNota Informada: %i \n", nota);
	
	return 0;
}
