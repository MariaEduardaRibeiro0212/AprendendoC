#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	//Hoje vamos aprender switch case uma estrutura de decisão.
	int opcao;
	
	printf("Escolha:\n 1- Segunda-feira.\n 2- Terça-feira.\n 3- Quarta-feira.\n 4- Quinta-feira.\n 5- Sexta-feira.\n 6- Sábado.\n 7- Domingo.\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Segunda-feira é um dia útil.");
			break;
			
		case 2:
			printf("Terça-feira é um dia útil.");
			break;
			
		case 3:
			printf("Quarta-feira é um dia útil.");
			break;
			
		case 4:
			printf("Quinta-feira é um dia útil.");
			break;
			
		case 5:
			printf("Sexta-feira é um dia útil.");
			break;
			
		case 6:
			printf("Sábado faz parte do fim de semana.");
			break;
			
		case 7:
			printf("Domingo faz parte do fim de semana.");
			break;	
			
		default:
		    printf("Essa opção não existe.");
			break;						
	}

	}	


