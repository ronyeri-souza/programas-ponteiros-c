#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

// 6 - Faça um programa que l}e uma string e imprime sua inversa.

void inverte(char *str);

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "");
	char name[10];
	printf("Digite um nome: ");
	fgets(name, 10, stdin);
	
	printf("O nome digitado foi: %s", name);
	inverte(name);
	printf("Nome invertido: %s", name);	
	return 0;
}

void inverte(char *str) {
	strrev(str);
}
