#include <conio.h>
#include <stdio.h>
#include <locale.h>
// 3 - Assumindo que pulo[] é um vetor do tipo int, quais das seguintes expressões referenciam o valor do terceiro elemento da matriz?

int main() {
	
	setlocale(LC_ALL, "");
	
	int pulo[5] = {1, 2, 3, 4, 5};
	int i;
	
	for(i = 0; i < 5; i++) {
		
		printf("%d\t", pulo[i]);
	}
	
	printf("\nQuais das seguintes expressões referenciam o valor do terceiro elemento do vetor?");
	// (a)
	printf("%d\n", *(pulo + 2)); //Resposta correta
	
	// (b)
	printf("%d\n", *(pulo + 4));
	
	// (c)
	printf("%d\n", pulo + 4);
	
	// (d)
	printf("%d\n", pulo + 2);
	
	return 0; 
}
