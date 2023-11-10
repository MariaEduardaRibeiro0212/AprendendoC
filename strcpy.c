#include <stdio.h>
#include <string.h>
#define N  10

int main (){
	
	char origem[N] = {"Olá mundo"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	//O strcpy serve para cópiar a string de uma origem e colar em uma variável de
	// destino, inclusive ela substitui o conteúdo da variável de destino ao colar
	//o conteúdo da variável de origem.
	strcpy(destino, origem);
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
	
}
