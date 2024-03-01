#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL,"");
	
	char login [200];
	char senha [200];
	char senhaCadastrada [200];
	char loginCadastrado [200];
	

	printf("Crie seu usuário: ");
	scanf("%s",&login);
	
	printf("Crie sua senha: ");
	scanf("%s",&senha);
	
	printf("Agora digite o seu usuário criado: ");
	scanf("%s",&loginCadastrado);
	
	printf("E sua senha criada: ");
	scanf("%s",&senhaCadastrada);
	
	
	if(strcmp(login, loginCadastrado) == 0 && strcmp(senha, senhaCadastrada) == 0) {
		printf("\nBem vindos!");
	} else {
		printf("\nLogin ou senha inválidos");
	}
	
	return 0;
}
