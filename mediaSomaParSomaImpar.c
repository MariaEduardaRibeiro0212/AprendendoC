#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[5], i = 0, soma = 0, somaPar = 0, somaImpar = 0;
	
	for(i; i <= 5; i++){
		printf("Digite um número inteiro:\n");
		scanf("%d\n", &numeros[i]);
		soma+=numeros[i];		
	}
	
	for(i = 0; i <= soma; i++){
		if(i % 2 == 0){
		somaPar+=i;	
		
		}else{
		somaImpar+=i;	
		}
	}
	
	printf("\n Printando todos números digitados\n");
	printf("%d\t", numeros[0]);
	printf("%d\t", numeros[1]);
	printf("%d\t", numeros[2]);
	printf("%d\t", numeros[3]);
	printf("%d\t", numeros[4]);
	printf("%d\n", numeros[5]);
	printf("A média de todos os números é %d\n", soma/6);
	printf("A soma dos pares é %d\n", somaPar);
	printf("A soma dos pares é %d\n", somaImpar);
	
}
