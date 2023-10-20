#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i = 1, fatorial = 1;
	
	printf("Digite um número inteiro positivo no qual deseja saber o fatorial:\n");
	scanf("%d", &numero);
	
	for(i; i <= numero; i++){
		fatorial*=i;
	}
	printf("O fatorial de %d! é %d.\n", numero, fatorial);
}
