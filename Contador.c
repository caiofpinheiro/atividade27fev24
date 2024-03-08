#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	
	int contador = 0;
	char continua;
	
	do {
		
		printf("Repetindo....\n");
		
		contador = contador + 1;
		
		printf("Tecle 's' se deseja continuar\n");
		scanf("%c",&continua);
		fflush(stdin);
		
	} while (continua == 's');
	
	printf("O bloco foi repetido %d vezes", contador);
	
	return 0;
}
