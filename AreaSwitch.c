#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	//Hoje vamos aprender switch case uma estrutura de decisão.
	
	int opcao;
	double raio, l, h, area;
	
	printf("Escolha uma forma geométrica:\n 1- Círculo.\n 2- Quadrado.\n 3- Triângulo.\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Digite o raio do círculo:\n");
			scanf("%lf", &raio);
			
			area = 3.14*(pow(raio,2));
			
			printf("A área do círculo é %.2lf.\n", area);
			break;
			
		case 2:
			printf("Digite o comprimento dos lados do quadrado:\n");
			scanf("%lf", &l);
			
			area = (pow(l,2));
			
			printf("A área do quadrado é %.2lf.\n", area);
			break;
			
		case 3:
			printf("Digite a base do triângulo:\n");
			scanf("%lf", &l);
			printf("Digite a altura do triângulo:\n");
			scanf("%lf", &h);
		
			area = (l*h)/2;
			
			printf("A área do triângulo é %.2lf.\n", area);	
			break;	
			
			default:
				printf("Opção inválida!");
			break;
			
	}
	}	

