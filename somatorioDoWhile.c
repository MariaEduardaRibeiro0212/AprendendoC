#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, soma = 0;
	
	do{
		printf("Digite um número inteiro positivo:\n");
		scanf("%d", &numero);
	
		soma+=numero;
		
	}while(numero != 0);
	
	printf("A soma dos números é %d", soma);
}
