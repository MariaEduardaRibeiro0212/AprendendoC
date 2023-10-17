#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
		
		printf("Digite um número inteiro positivo:\n");
		scanf("%d", &numero);
		printf("\n");
	
	do{
	
		printf("%d\n", numero);
	
		numero--;
		
	}while(numero >= 1);
	
}
