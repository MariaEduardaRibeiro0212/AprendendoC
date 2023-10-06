#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num, c = 2;
	
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &num);
	
	while(c <= num){
		printf("%d\t", c);
		c+=2;
		
}
}
