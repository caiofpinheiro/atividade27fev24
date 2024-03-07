#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"");
	int i;
	float soma, nota;
	
	for(i = 1; i <=5; i++){
		printf("Digite a %iª nota: ", i);
		scanf("%f",&nota);
		
		soma = soma + nota;
	}
	
	printf("\n >>> Exibindo resultados <<< \n");
	printf("Soma: %.1f \n", soma);
	
	
	return 0;
		
}
