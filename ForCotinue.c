#include <stdio.h>
#include <locale.h>

//break: encerrar por completo uma sequência de repetição
//continue: não printa o número declarado.

int main(){
	
	int i = 1;
	
	for(1; i <= 10; i++){
		
		if(i == 5){
			continue;
		}
			printf("%d", i);	
	}	
}
