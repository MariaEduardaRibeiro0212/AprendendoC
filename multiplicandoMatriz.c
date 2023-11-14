#include <stdio.h>
#include <locale.h>

int main(){
      setlocale(LC_ALL, "Portuguese");
      
      int matriz[3][3], i, j, multiplicador;
      
      printf("Digite números para a matriz 3x3:\n");
      for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
            }
      }
      printf("\nVeja matriz gerada:\n");
      for(i = 0; i < 3; i++){
      	for(j = 0; j < 3; j++){
      		printf("%d\t", matriz[i][j]);
		  }
		  printf("\n");
	  }
      
      printf("\nDigite um número no qual deseja multiplicar:\n");
      scanf("%d", &multiplicador);
      
      //Multiplicando os elemetos da matriz pelo multiplicador:
      
      for(i = 0; i < 3; i++){
      	for(j = 0; j < 3; j++){
      		matriz[i][j]*=multiplicador;
		  }
	  }
	  
	  //A matriz com resultado da multiplicação
	  for(i = 0; i < 3; i++){
	  	for(j = 0; j < 3; j++)
	  	printf("%d\t", matriz[i][j]);
	  	printf("\n");
	  }
      }
