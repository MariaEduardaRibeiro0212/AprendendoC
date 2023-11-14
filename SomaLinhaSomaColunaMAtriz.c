#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(){
      setlocale(LC_ALL, "Portuguese");
      
      srand(time(NULL));
      
      int matriz[4][4], i, j;
      
      for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
                  matriz[i][j] = rand () % 11;  
            }
      }
      
            printf("\n---Exibindo a matriz com números aleatórios----\n");
      for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
            }
            printf("\n");
      }
      
      printf("Soma de cada linha:\n");
      for( i = 0; i < 4; i++){
            int somaLinha = 0;
            for(j = 0; j < 4; j++)
                  somaLinha += matriz[i][j];
            printf("Soma da linha %d: %d\n", i + 1 , somaLinha);  
      }
      
            printf("\nSoma de cada coluna:\n");
      for( j = 0; j < 4; j++){
            int somaColuna = 0;
            for(i = 0; i < 4; i++)
                  somaColuna += matriz[i][j];
            printf("Soma da coluna %d: %d\n", i + 1 , somaColuna);      
      }
      
            }
