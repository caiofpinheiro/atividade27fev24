#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main(){
	setlocale(LC_ALL,"");
	//declarar vari�veis
	char nome [200], sexo [200];
	int idade, maiorIdade = 0, menorIdade = 9999, qtdMulheres5k, pessoas, opcao, contadorSalario = 0;
	float salario, mediaSalario, soma, somaSalario = 0;
	
	
	
	do {
	
	//criando menu de sele��o
	printf("\nC�digo | Descri��o \n");
	printf("\n1      | Adicionar pessoa\n");
	printf("\n2      | Exibir resultador e sair");
	
	printf("\n\nSelecione uma op��o: ");
	scanf("%i",&opcao);
	
	fflush(stdin);
	
	switch(opcao){
	case 1:
		printf("\nDigite seu nome: ", nome);
		scanf("%c",&nome);
		fflush(stdin);
				
		printf("\nDigite sua idade: ", idade);
		scanf("%i",&idade);
		fflush(stdin);
		
		printf("\nDigite seu sexo (M ou F): ", sexo);
		scanf("%c",&sexo);
		
		
		
		fflush(stdin);
		
		printf("\nDigite seu sal�rio: ", salario);
		scanf("%f",&salario);
		fflush(stdin);
		
		somaSalario += salario;
		contadorSalario++;
		
		if (idade > maiorIdade) {
			maiorIdade = idade;
		} 
		
		
		if (idade < menorIdade) {
			menorIdade = idade;
		}
		
		if(sexo == 'F' && salario >= 5000){
			qtdMulheres5k++;
		}
		
		break;
	case 2:
		
		mediaSalario = somaSalario / contadorSalario;
		
		printf("M�dia do sal�rio do grupo: R$ %.2f\n", mediaSalario);
		printf("Maior Idade do grupo: %i \n", maiorIdade);
		printf("Menor idade do grupo: %i \n", menorIdade);
		printf("Quantidade de mulheres com sal�rio maior que 5 mil: %i \n", qtdMulheres5k);
		
	default:
		printf("\nOP��O INV�LIDA!!\n");
	}
	
 } while (opcao != 2);

		
	return 0;
	
}
