#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	
	printf("Numeros impares de 1 a 20:");
	for (i=1; i <=20; i=i+2) {	
		printf("\n %i", i);
	}
	return 0;
	
}
