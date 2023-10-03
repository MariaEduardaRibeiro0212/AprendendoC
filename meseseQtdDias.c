#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	//Hoje vamos aprender switch case uma estrutura de decisão.
	
	int opcaoMes, qtdDias;
	
	printf("Escolha um mês:\n 1- Janeiro. \n 2- Fevereiro.\n 3- Março. \n 4- Abril.\n 5- Maio. \n 6- Junho.\n 7- Julho.\n 8- Agosto.\n 9- Setembro.\n 10-outubro.\n 11-Novembro.\n 12-Dezembro.\n");
	printf("\n");
	scanf("%d", &opcaoMes);
	printf("\n");
	
	switch(opcaoMes){
		
		case 1:
			qtdDias = 31;
			printf("O mês de janeiro tem %d dias.\n", qtdDias);
			break;
			
		case 2:
			qtdDias = 28;
			printf("O mês de fevereiro tem %d dias.\n", qtdDias);
			break;	
			
		case 3:
			qtdDias = 31;
			printf("O mês de março tem %d dias.\n", qtdDias);
			break;
			
		case 4:
			qtdDias = 30;
			printf("O mês de abril tem %d dias.\n", qtdDias);
			break;	
			
		case 5:
			qtdDias = 31;
			printf("O mês de maio tem %d dias.\n", qtdDias);
			break;	
		
		case 6:
			qtdDias = 30;
			printf("O mês de junho tem %d dias.\n", qtdDias);
			break;	
			
		case 7:
			qtdDias = 31;
			printf("O mês de julho tem %d dias.\n", qtdDias);
			break;	
			
		case 8:
			qtdDias = 31;
			printf("O mês de agosto tem %d dias.\n", qtdDias);
			break;
			
		case 9:
			qtdDias = 30;
			printf("O mês de setembro tem %d dias.\n", qtdDias);
			break;
			
		case 10:
			qtdDias = 31;
			printf("O mês de outubro tem %d dias.\n", qtdDias);
			break;
			
		case 11:
			qtdDias = 30;
			printf("O mês de novembro tem %d dias.\n", qtdDias);
			break;	
			
		case 12:
			qtdDias = 31;
			printf("O mês de dezembro tem %d dias.\n", qtdDias);
			break;					
			
	}
		
	}
