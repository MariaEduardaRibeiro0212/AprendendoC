#include <stdio.h>
#include <string.h>

int main (){
      char string1[20], string2[20];
      int igual;
      
      printf("Digite uma string:\n");
      fgets(string1, sizeof(string1), stdin);
      
      printf("Digite outra string:\n");
      fgets(string2, sizeof(string2), stdin);
      
	  igual = strcmp(string1, string2);
      
      if(igual == 0){
      	printf("As duas strings são identicas.\n");
      	
	  }else{
	  	printf("As duas strings não saõ idêntica.\n");
	  }

}
