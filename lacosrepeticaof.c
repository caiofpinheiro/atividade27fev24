#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

//la�os de repeti��o

int main(){
	setlocale(LC_ALL,"");
	int i, resultado, n1;
	
	printf("Digite um n�mero: ");
	scanf("%i",&n1);
	
	for (i = 1;i <= 10; i++){
		resultado = n1 * i;
		printf("\n%i x %i = %i",n1, i, resultado);
		
	}
	
	return 0;
}
