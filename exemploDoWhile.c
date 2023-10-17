#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, numero;
	
	do{
		printf("Digite um número inteiro positivo:\n");
		scanf("%d", &numero);
		i++;
		
	}while(numero != 0);
	
	printf("O programa executou %d vezes ", i - 1);
}
