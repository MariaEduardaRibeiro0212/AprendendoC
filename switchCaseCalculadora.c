#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	//Hoje vamos aprender switch case uma estrutura de decisão.
	
	int opcao, numero1, numero2, resultado;
	
	printf("Escolha uma operação: \n1- Soma. \n2- Subtração. \n3- Multiplicão. \n4- Divisão.\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Digite um número:\n");
			scanf("%d", &numero1);
			
			printf("Digite outro número para realizarmos a adição:\n");
			scanf("%d", &numero2);
			
			resultado = numero1+numero2;
			
			printf("A soma é %d.\n", resultado);
			
			break;
			
	case 2:
			printf("Digite um número:\n");
			scanf("%d", &numero1);
			
			printf("Digite outro número para realizarmos a subtração:\n");
			scanf("%d", &numero2);
			
			resultado = numero1-numero2;
			
			printf("A diferença dos números é %d.\n", resultado);
			
			break;		
			
	case 3:
			printf("Digite um número:\n");
			scanf("%d", &numero1);
			
			printf("Digite outro número para realizarmos a multiplicação:\n");
			scanf("%d", &numero2);
			
			resultado = numero1*numero2;
			
			printf("O produto dos números é %d.\n", resultado);
			
			break;
			
		case 4:
			printf("Digite um número:\n");
			scanf("%d", &numero1);
			
			printf("Digite outro número para realizarmos a divisão:\n");
			scanf("%d", &numero2);
			
			resultado = numero1/numero2;
			
			printf("O resultado da divisão é %d.\n", resultado);
			
			break;	
			
			default:
			printf("Você escolheu uma opção inválida.\n");						
				
	}
	
	
	}
