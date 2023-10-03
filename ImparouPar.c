#include <stdio.h>
#include <locale.h>

int main(){
	//Usuário digitará um número e o programa retornará se o número é impar ou par:
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número inteiro:\n");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("O número digitado é par.\n");
	} else{
		printf("O número digitado é impar.");
	}	
}
