#include <stdio.h>
#include <locale.h>

int main(){
      int matriz[3][3], num, i, j;
      setlocale(LC_ALL, "Portuguese");
      
      for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                  printf("Digite um número:\n");
                  scanf("%d", &matriz[i][j]);
            }
      }
      
      printf("\n----Exibindo a matriz-----\n");
      for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
            printf("%2d ", matriz[i][j]);
            }
            printf("\n");
      }
}
