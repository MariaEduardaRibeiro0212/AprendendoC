#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Alunos{
      char nome[50];
      int matricula;
      float notas[3];
      float media;
      char resultado[50];
};

void leitura(struct Alunos alunos[3]){
      int i, j;
      for(i = 0; i < 3; i++){
            printf("Digite o nome do aluno %d: ", i+1);
            fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
            fflush(stdin);
            printf("Digite a matrícula do aluno %d: ", i + 1);
            scanf("%d", &alunos[i].matricula);
            fflush(stdin);
            printf("Digite as notas:\n");
      for(j = 0; j < 3; j++){
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
            fflush(stdin);
      }
      printf("\n");
      }
}

void impressao(struct Alunos alunos[3]){
      int i, j;
      float media;
      for(i = 0; i < 3; i++){
            printf("\nNome do aluno %d: %s", i + 1, alunos[i].nome);
            printf("Matrícula do aluno %d: %d\n", i + 1, alunos[i].matricula);
            printf("Notas em três disciplinas:\n");
            
      for(j = 0; j < 3; j++){
            printf("Nota %d: %.2f\n", j + 1, alunos[i].notas[j]);
            alunos[i].media += alunos[i].notas[j];
      }
       media = alunos[i].media / 3;
      
      printf("Média do aluno %d: %.2f\n", i + 1, media);
      
      if(media >= 5 && media < 7){
      strcpy(alunos[i].resultado, "Recuperação");
      printf("Situação: %s\n", alunos[i].resultado);
      
      } else if(media >= 7){
      strcpy(alunos[i].resultado, "Aprovado");
      printf("Situação: %s\n", alunos[i].resultado);
                  
      } else{
      strcpy(alunos[i].resultado, "Reprovado");
      printf("Situação: %s\n", alunos[i].resultado);
      }
      alunos[i].media = 0.0;
      media = 0.0;
      }
}

int main(){
      setlocale(LC_ALL, "Portuguese");
      
      struct Alunos alunos[3];
      
      printf("----COLETANDO DADOS----\n");
      leitura(alunos);
      
      printf("----IMPRIMINDO RESULTADOs----\n");
      impressao(alunos);
}
