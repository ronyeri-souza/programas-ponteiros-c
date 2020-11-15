#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

// 7 - Faça um programa que lê um vetor com 10 elementos e imprime apenas os valores pares.

#define TAM 10
void vetorPares(int *p);

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	int vet[TAM];
	int i;
	
	for(i = 0; i < TAM; i++) {
		
		printf("Digite um número: ");
		scanf("%d", &vet[i]);
		fflush(stdin);
	}
	
	vetorPares(vet);
	
	return 0;
}

void vetorPares(int *p) {
	
	int i;
	for(i = 0; i < TAM; i++) {
		
//		if(p[i] % 2 == 0) {
//			
//			printf("\n%d\t", p[i]);
//		}

		if(*(p + i) % 2 == 0) {
			
			printf("\n%d\t", *(p + i));
		}
		
	}
}

