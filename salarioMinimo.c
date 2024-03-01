#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float salarioInformado, quantidadeSalario, salarioMinimo = 1412.00;
	
	printf("Digite o salário: ");
	scanf("%f",&salarioInformado);
	
	quantidadeSalario = salarioInformado / salarioMinimo;
	
	printf("\nSalário Informado: %f", salarioInformado);
	printf("\nQuantidade de salários: %f", quantidadeSalario);
	
	return 0;
}
