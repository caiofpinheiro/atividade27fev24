#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome [200];
	int idade, nota1, nota2, nota3;
	float media;
	
	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	printf("Digite sua primeira nota: ");
	scanf("%i",&nota1);
	
	printf("Digite sua segunda nota: ");
	scanf("%i",&nota2);
	
	printf("Digite sua terceira nota: ");
	scanf("%i",&nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	system("cls || clear");
	printf("\n>>> Exibindo ao usuario <<<");
	printf("\nNome do Aluno: %s", nome);
	printf("\nIdade do Aluno: %i", idade);
	printf("\nMedia do Aluno: %f", media);
		if(media >=7 ){
		printf("\nAluno Aprovado.");
		
	} else {
		printf("\nAluno Reprovado.");
	}
}

