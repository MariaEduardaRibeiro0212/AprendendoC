#include <stdio.h>
#include <locale.h>
#include <string.h>


struct Estudante{
	char nome[80];
	int idade;
	double notas[3];
};
typedef struct Estudante Estudante;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	double media = 0;
	Estudante estudante;
	
	printf("Digite o nome do estudante:\n");
	fgets(estudante.nome, 80, stdin);
	fflush(stdin);
	
	printf("\nDigite a idade:\n");
	scanf("%d", &estudante.idade);
	fflush(stdin);
	
	printf("\nDigite as notas:\n");
	for(i = 0; i < 3; i++){
		printf("Nota %d: ", i+1);
		scanf("%lf", &estudante.notas[i]);
		fflush(stdin);
		
		media+=estudante.notas[i]; 
	}
	
	printf("\n---Média das notas---\n");
	printf("Média: %.2lf", media/3);
}
