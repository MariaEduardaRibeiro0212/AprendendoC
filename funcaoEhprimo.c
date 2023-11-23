#include <stdio.h>
#include <locale.h>
#include <math.h>

int primo(int num){
	int i, fim = sqrt(num);
	if( num == 1 && num == 0){
		return 0;
	}else{
		for(i = 2; i <= fim; i++){
			if(num % i == 0){
				
				return 0;
			}
		}
		return 1;
	}
	
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numero, resultado;
	
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &numero);
	
	resultado = primo(numero);
	
	printf("1 - primo ou 0 - Não primo\n");
	printf("Resultado %d", resultado);
	}
	
