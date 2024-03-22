#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>


#define tam 2

int main(){
	setlocale(LC_ALL,"");

	float numeros[2][3];
	int i, j;
	char nomes[2][200];
	
	
	for(i = 0; i < 2; i++){
		printf("Digite o nome do %iº aluno: ", i+1);
		scanf("%s",&nomes[i]);
		
		for(j = 0; j < 3; j++){
			printf("%dª Nota: ", j + 1);
			scanf("%f",&numeros[i][j]);
		}
	}
	
	printf("\n >>> Exibindo resultado <<< \n");
	for(i = 0; i < 2; i++){
		printf("%iº aluno: %s \n\n", i + 1, nomes[i]);
		
		for(j = 0; j < 3; j++){
			printf("%iª nota: %.1f \n\n", j + 1, numeros[i][j]);
		}
	}	
	
	return 0;
}
