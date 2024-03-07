#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	
	printf("Numeros pares de 100 a 120:");
	for (i=100; i <=120; i=i+2) {	
		printf("\n %i", i);
	}
	return 0;
}
