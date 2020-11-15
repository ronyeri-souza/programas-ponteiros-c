#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1. Quais serão as saidas do programa abaixo? 

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	
	int valor;
	int *p1;
	float temp;
	float *p2;
	char aux;
	char *nome = "Algoritmos";
	char *p3;
	int idade;
	int vetor[3];
	int *p4;
	int *p5;
	
	/* (a) */ 
	valor = 10;
	// p1 aponta para o endereço de valor
	p1 = &valor; 
	// p1 atribui 20 para o endereço que ele aponta, no caso, valor
	*p1 = 20; 
	// imprime 20 como resultado
	printf("(a) %d \n", valor); 

	/* (b) */ 
	temp = 26.5;
	// p2 aponta para o endereço de temp 
	p2 = &temp;
	// p2 atribui 29.0 para o endereço que ele aponta
	*p2 = 29.0;
	// imprime 29.0 como resultado
	printf("(b) %.1f \n", temp);

	/* (c) */
	// p3 aponta para o endereço inicial da string nome, ou seja para nome[0] 
	p3 = &nome[0];
	// aux recebe o dado apontado por p3, ou seja, recebe nome[0]
	aux = *p3;
	// imprime a letra A de Algoritmos
	printf("(c) %c \n", aux);

	/* (d) */
	// p3 aponta para o endereço de nome[4], que é R
	p3 = &nome[4];
	// aux  recebe o dado apontado por p3
	aux = *p3;
	// imprime a letra r, que é nome[4]
	printf("(d) %c \n", aux);

	/* (e) */ 
	// p3 vai apontar para o endereço inicial de nome (nome[0])
	p3 = nome;
	// imprime 'A' pois p3 não é um ponteiro para um vetor, apenas para char
	printf("(e) %c \n", *p3);

	/* (f) */
	// desloca 4 endereços, ou seja, vai de 0 para 3, então imprime o r
	p3 = p3 + 4;
	// Imprime r
	printf("(f) %c \n", *p3);

	/* (g) */ 
	// decrementa p3, então passa de 4 para 3, aponta para nome[3]
	p3--;
	// imprime o	
	printf("(g) %c \n", *p3);

	/* <h> */ 
	vetor[0] = 31;
	vetor[1] = 45;
	vetor[2] = 27; 
	// p4 aponta para o endereço inicial do vetor, ou seja vetor[0]
	p4 = vetor; 
	// idade recebe o dado apontado de p4, ou seja vetor[0]
	idade = *p4;
	// imprime 31
	printf("(h) %d \n", idade);
	
	/* (i) */
	// p5 recebe o endereço de memória apontado por p4 + 1, ou seja p5 aponta para vetor[1]
	p5 = p4 + 1;
	// idade recebe o dado apontado por p5
	idade = *p5;
	// imprime 45	
	printf("(i) %d \n", idade);

	/* (j) */
	// p4 recebe o endereço de p5 + 1, ou seja, aponta para vetor[2]
	p4 = p5 + 1;
	// idade recebe o dado apontado por p4
	idade = *p4;
	// imprime 27
	printf("(j) %d \n", idade);

	/* (l) */
	// p4 apontava para vetor[2] mas subtraindo agora aponta para vetor[0]
	p4 = p4 - 2;
	// idade recebe o valor apontado por p4
	idade = *p4;
	// imprime 31
	printf("(l) %d \n", idade);
	
	/* (m) */
	// p5 recebe o endereço de memória de vetor[2] - 1, logo p5 aponta para vetor[1]
	p5 = &vetor[2] - 1;
	// imprime 45
	printf("(m) %d\n", *p5);

	/* (n) */ 
	// p5 desloca para vetor[1 + 1], u seja vetor[2]
	p5++;
	// imprime 27
	printf("(n) %d \n", *p5);

	return 0;
}
