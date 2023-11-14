#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
      setlocale(LC_ALL, "Portuguese");
      
      char s1[50], s2[50], s3[50];
      
      printf("Escreva a 1° string:\n");
      fgets(s1, sizeof(s1), stdin);
      
      printf("Escreva a 2° string: \n");
      fgets(s2, sizeof(s2), stdin);
      
      strcpy(s3, s1);
      strcat(s3, s2);
      
      puts(s3);
      }
