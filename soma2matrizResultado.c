#include <stdio.h>
#include <locale.h>

int main(){
      setlocale(LC_ALL, "Portuguese");
      int mat1[2][2] = {{2, 3}, {4, 5}};
      int mat2[2][2] = {{9, 5}, {1, 0}};
      int mat3[2][2], i, j;
      for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
      }
      
            printf("\n----Exibindo a terceira matriz-----\n");
      for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
            printf("%2d ", mat3[i][j]);
            }
            printf("\n");
      }
      }
