#include <stdio.h>
#include <string.h>
#include <locale.h>
#define N 50

struct Livro
{
      int ano;
      char titulo[N];
      char autor[N];
};

typedef struct Livro Livro;

int main(){
	setlocale(LC_ALL, "Portuguese");
       Livro livro = {0000, "Titulo", "Maria Eduarda"};
      
       int n = sizeof(livro.titulo) / sizeof(livro.titulo[0]);
	   int t = sizeof(livro.autor) / sizeof(livro.autor[0]); //Ler o tamanho do array dinâmicamente
      
       puts("Imprimindo dados do livro:\n");
       printf("Ano de publicação: %d\n", livro.ano);
       printf("Título: %s\n", livro.titulo);
       printf("Autor: %s\n", livro.autor);
      
       //Atribuindo dados ao campo
       livro.ano = 2000;
       strcpy(livro.titulo, "o título");
       strcpy(livro.autor, "eu mesma");
      
       puts("\nAlterando os dados via código\n");
       printf("Ano: %d\n", livro.ano);
       printf("Título: %s\n", livro.titulo);
       printf("Autor: %s\n", livro.autor);
      
       //Atribuindo dados aos campos dinâmicamente:
    puts("\nDigite o ano de publicação do livro:");
	scanf("%d", &livro.ano);
	fflush(stdin);
	puts("Digite o título do livro:");
	fgets(livro.titulo, n, stdin);
	fflush(stdin);
	puts("Digite nome do autor:");
	fgets(livro.autor, n, stdin);
      
      puts("\nImprimindo dados que usuário digitou:");
      printf("Ano: %d\n", livro.ano);
      printf("Titulo: %s", livro.titulo);
      printf("Nome do autor: %s\n", livro.autor);
     
}
