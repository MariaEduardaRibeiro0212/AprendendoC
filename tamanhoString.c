#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 10

int main (){
      setlocale(LC_ALL, "Portuguese");
      
      char s[N];
      int i;
      
      printf("Digite seu primeiro e último nome :\n");
      fgets(s, N, stdin);
      
      s[strcspn(s, "\n")] = '\0'; //para desconsiderar o caracter de nova linha
      
      
      i = strlen(s); // - 1 para desconsiderar o caracter de nova linha
      
      printf("Tamanho da palavra digitada %d\n", i);
      
      printf("Impressão de posição em posição:\n");
      
      for(i = 0; i < strlen(s); i++){
            printf("%d - %c\n", i, s[i]);
      }
      
      }
