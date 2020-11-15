#include <conio.h>
#include <stdio.h>

// 4 - O que fazem os programas abaixo? (no caso, funções)

void programa01() {
	
	int vet[] = {4, 9, 13};
	int i;
	
	printf("\nPrograma 01\n");
	for(i = 0; i < 3; i++) {
		
		printf("%d", *(vet+i));
		
	}
	
	printf("\n");
}

void programa02() {

	int vet[] = {4, 9, 13};
	int i;
	printf("\nPrograma 02 \n");
	
	for(i = 0; i < 3; i++) {
	
		printf("%x\t", vet + i);
	}
	
	printf("\n");
}

void programa03() {
	
	int vet[] = {4, 9, 13};
	int i;
	printf("\nPrograma 03 \n");
	
	for(i = 0; i < 3; i++) {
	
		printf("%x\t", vet + i);
	}
	
	printf("\n");
}

int main(int argc, char *argv[]) {
	
	programa01();
	programa02();
	programa03();
	return 0;
}
