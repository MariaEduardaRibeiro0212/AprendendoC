#include <stdio.h>
#include <locale.h>
#include <string.h>
      
      struct Aluno{
                  char nome[50];
                  int idade;
                  double nota[2];
            };

      void lerDadosAluno(struct Aluno aluno[3]){
             setlocale(LC_ALL, "Portuguese");
            int i, j;
            for(i = 0; i < 3; i++){
                  printf("\nDigite o nome do aluno %d: ", i+1);
                  fgets(aluno[i].nome, 50, stdin);
                  fflush(stdin);
                  printf("Digite a idade: ");
                  scanf("%d", &aluno[i].idade);
                  fflush(stdin);
                  printf("Digite as notas:\n");
            for(j = 0; j < 2; j++){
                  printf("Notas %d: ", j+1);
                  scanf("%lf", &aluno[i].nota[j]);
                  fflush(stdin);    
            }
            
            }     
      }
      
      void imprimirDadosAluno(struct Aluno aluno[3]){
      		setlocale(LC_ALL, "Portuguese");
            int i, j;
            double soma = 0.0;
            for(i = 0; i < 3; i++){
                  printf("Nome do aluno %d: %s", i+1, aluno[i].nome);
                  printf("Idade do aluno %d: %d \n", i+1, aluno[i].idade);
                  
            for(j = 0; j < 2; j++){
                  printf("Nota %d: %.2lf \n", j+1, aluno[i].nota[j]);
                  soma+=aluno[i].nota[j];
                  
            }
                  printf("Média aluno %d: %.2lf\n\n", i +1, soma/2);
                  soma = 0.0;
            }
      }
      

int main(){
      setlocale(LC_ALL, "Portuguese");
      struct Aluno aluno[3];
      
      lerDadosAluno(aluno);
      
      printf("\n----Imprimindo dados----\n");
      imprimirDadosAluno(aluno);
      
}
