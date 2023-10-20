#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 1, soma = 0;
	
	for (i; i<=100; i+=2){
		
		soma+=i;
	}
	
	printf("O somatório dos número impares de 1 até 100 é %d", soma);
		
}
