#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double temperatura, resultado;
	char escolha;
	
	printf("Digite uma temperatura em graus celsius:\n");
	scanf("%lf", &temperatura);
	
	printf("Escolha (F)- fahrenheit ou (K) - Kelvin para a conversão:\n");
	scanf("%s", &escolha);
	
	if(escolha == 'F'){
		
		resultado = (9*temperatura/5)+32;
		printf("A temperatura em fahrenheit é %.2lf", resultado);
		
	}else if(escolha == 'K'){
		
		resultado = temperatura+273.15;
		printf("A temperatura em Kelvin é %.2lf", resultado);
		
	} else{
		printf("Escolha inválida.\n");
	}
	}
