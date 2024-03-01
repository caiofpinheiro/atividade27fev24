#include <stdio.h>

int main(){
	
	int numeroInteiro;
	int subtracao, soma;
	
	
	printf("Digite o numero desejado: ");
	scanf("%i",&numeroInteiro);
	
	subtracao = numeroInteiro - 1;
	soma = numeroInteiro + 1;
	
	printf("\n>>Exibindo ao usuario<< ");
	printf("\nAntecessor: %i", subtracao);
	printf("\nSucessor: %i", soma);
	
	
	return 0;
}
