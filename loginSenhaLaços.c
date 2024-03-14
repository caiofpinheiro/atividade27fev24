#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	char loginUsuario [200], senhaUsuario [200], senhaCadastrada [200], loginCadastrado [200];
	
	printf("Crie um usuário: ");
	scanf("%s",&loginUsuario);
	
	
	printf("Crie uma senha: ");
	scanf("%s",&senhaUsuario);
	
	do{
		system("cls");
		printf("Digite seu usuário criado: ");
		scanf("%s",&loginCadastrado);
		
		printf("Digite sua senha cadastrada: ");
		scanf("%s",&senhaCadastrada);
		
		
	}while (strcmp(loginUsuario, loginCadastrado) != 0 || strcmp(senhaUsuario, senhaCadastrada) != 0);
		printf("\nBem vindos!!!");
		
 return 0;
}
