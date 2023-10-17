#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int numero, fatorial = 1, i = 1;
	
	
	do{
	printf("Digite um número positivo:\n");
	scanf("%d", &numero);
	printf("\n");
	}while(numero < 0);
	

	do{
	
		fatorial *= i;	
		i++;		
		
	}while(i < numero);
	
	printf("O fatorial do %d! é %d.\n", numero, fatorial);
	
	
}
