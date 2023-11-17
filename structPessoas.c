#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 3

struct Pessoa{
	char nome[100];
	int idade;
	double altura;
};

typedef struct Pessoa Pessoa;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	double mediaIdade = 0, mediaAltura =  0;
	Pessoa pessoa [N];	
	
	for(i = 0; i < N; i++){
		printf("\nDigite o nome:\n");
		scanf("%100[^\n]s", &pessoa[i].nome);
		fflush(stdin);
		
		printf("\nDigite a idade:\n");
		scanf("%d", &pessoa[i].idade);
		fflush(stdin);
		
		printf("\nDigite a altura:\n");
		scanf("%lf", &pessoa[i].altura);
		fflush(stdin);
		
		mediaIdade+=pessoa[i].idade;
		mediaAltura+=pessoa[i].altura;
	}
	
	printf("\n---Médias---\n");
	printf("A média das idades é %.2lf\n", mediaIdade/3);
	printf("A média das alturas é %.2lf", mediaAltura/3);
	}
