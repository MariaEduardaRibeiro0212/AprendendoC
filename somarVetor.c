#include <stdio.h>
#include <locale.h>

int main (){
      
      setlocale(LC_ALL, "Portuguese");
      
      int array[5] = {1, 2, 3, 4, 5}, i, soma = 0;
      
      for(i = 0; i < 5; i++){
      soma+=array[i];   
      }
      
      printf("A soma dos números do array é %d.\n", soma);
}
