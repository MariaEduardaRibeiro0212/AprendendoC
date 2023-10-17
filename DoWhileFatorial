#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int numero, fatorial = 1, i = 1;
	printf("Digite um número positivo:\n");
	scanf("%d", &numero);
	printf("\n");
	
	if(numero>0){
	do{
		i++;
		fatorial *= i;	
	}while(i != numero);
	
	printf("O fatorial do %d! é %d.\n", numero, fatorial);		
		
	}else{
		printf("Você digitou um número negativo, e por ser negativo não possui fatorial.");
	}

}
