#include <conio.h>
#include <stdio.h>
#include <locale.h>

// 5 - O que faz o seguinte programa quando executado?

void programaA() {
	
	int vet[] = {4, 9, 12};
	int i, *ptr;
	ptr = vet;
	
	printf("\nPrograma A\n");
	for(i = 0; i < 3; i++) {
		
		printf("%d\t", *ptr++);
	}
}

void programaB() {
	
	int vet[] = {4, 9, 12};
	int i, *ptr;
	ptr = vet;

	printf("\nPrograma B\n");
	for(i = 0; i < 3; i++) {
		
		printf("%d\t", (*ptr)++);
	}
}

int main(int argc, char *argv[]) {
	
	programaA();
	programaB();
	
	return 0;
}
