#include <conio.h>
#include <stdio.h>

// 2 - Qual o resultado do seguinte programa?

void main(){
	
//	declara o vetor e alimenta-o
	float vet[5] = {1.1,2.2,3.3,4.4,5.5};
//	declara um ponteiro para float 
	float *f; 
//	declara um inteiro
	int i;
//	f aponta para o endereço inicial do vet[5], ou seja, f aponta para vet[0]
	f = vet;
	 
	printf("contador/valor/valor/endereco/endereco");

	for(i = 0 ; i <= 4 ; i++) {
	
//		imprimindo o contador	
		printf("\ni = %d",i);
//		imprime o dado armazenado em vet[i]
		printf(" vet[%d] = %.1f",i, vet[i]);
//		mprime o valor apontado por (f + i)
		printf(" *(f + %d) = %.1f",i, *(f+i));
//		imprime o endereço de vet[i]
		printf(" &vet[%d] = %X",i, &vet[i]);
//		imprime o endereço de memória apontado por (f + i)
		printf(" (f + %d) = %X",i, f+i);
	
	}
}
