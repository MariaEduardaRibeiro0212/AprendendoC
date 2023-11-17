#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Funcionarios{
	char nome[50];
	int idade;
	float salario;
};

typedef struct Funcionarios Funcionarios;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Dados inicializados:
	Funcionarios funcionarios = {"Maria", 30 , 2500.00 };
	int n = sizeof(funcionarios.nome) / sizeof(funcionarios.nome[0]);
	
	printf("---Imprimindo dados inicializados---\n");
	printf("Nome: %s\n", funcionarios.nome);
	printf("Idade: %d\n", funcionarios.idade);
	printf("Salário: %.2f\n\n", funcionarios.salario);
	
	//Atribuindo valores no código:
	
	strcpy(funcionarios.nome, "João");
	funcionarios.idade = 18;
	funcionarios.salario = 5000.00;	
	
	printf("---Imprimindo dados inseridos via código---\n");
	printf("Nome: %s\n", funcionarios.nome);
	printf("Idade: %d\n", funcionarios.idade);
	printf("Salário: %.2f\n\n", funcionarios.salario);
	
	//Dados inseridos por usuários:
	printf("--Coletando dados do usuário:--\n");
	puts("Nome do funcionário:");
	fgets(funcionarios.nome, n, stdin);
	fflush(stdin);
	puts("Idade do funcionário:");
	scanf("%d", &funcionarios.idade);
	fflush(stdin);
	puts("Salário:");
	scanf("%f", &funcionarios.salario);
	
	printf("\n---Imprimindo dados inseridos por usuários---\n");
	printf("Nome: %s", funcionarios.nome);
	printf("Idade: %d\n", funcionarios.idade);
	printf("Salário: %.2f", funcionarios.salario);
	
}
