#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, n1, par = 0, impar = 0;
	
	for(i = 1; i <=5; i++){
		printf("Digite o %i� n�mero: ", i);
		scanf("%i",&n1);
		
		if(n1 % 2 == 0){
			par = par + 1;
		} else {
			impar++;
		}
	}
	printf("\n >>> Exibindo ao usu�rio <<<");
	printf("\nQuantidade de n�meros pares: %i \n", par);
	printf("\nQuantidade de n�meros impares: %i \n", impar);
	

	return 0;
}
