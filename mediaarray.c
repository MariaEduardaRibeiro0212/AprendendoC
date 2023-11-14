#include <stdio.h>
#include <locale.h>

int main (){
      setlocale(LC_ALL, "Portuguese");
      
      float array[5] = {1.5, 2.5, 3.5, 4.5, 5.5}, media = 0, soma = 0;
      int i;
      
      for(i; i < 5; i++){
      soma+=array[i];   
      media = soma/5;
      }
      
      printf("A média dos números do array é %.2f.\n", media);
}
