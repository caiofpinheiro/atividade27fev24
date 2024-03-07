#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

//laços de repetição

int main(){
	setlocale(LC_ALL,"");
	int i, resultado, n1;
	
	printf("Digite um número: ");
	scanf("%i",&n1);
	
	for (i = 1;i <= 10; i++){
		resultado = n1 * i;
		printf("\n%i x %i = %i",n1, i, resultado);
		
	}
	
	return 0;
}
