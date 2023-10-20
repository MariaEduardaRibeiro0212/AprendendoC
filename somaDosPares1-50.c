#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, soma = 0;
	
	for(i; i <= 50; i+=2){
		
		if(i == 0){
			continue;
		}
		
		soma+=i;
			
	}
	printf("A soma dos números pares de 1 até 50 é %d ", soma);	
}
