#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float salarioInformado, quantidadeSalario, salarioMinimo = 1412.00;
	
	printf("Digite o sal�rio: ");
	scanf("%f",&salarioInformado);
	
	quantidadeSalario = salarioInformado / salarioMinimo;
	
	printf("\nSal�rio Informado: %f", salarioInformado);
	printf("\nQuantidade de sal�rios: %f", quantidadeSalario);
	
	return 0;
}
