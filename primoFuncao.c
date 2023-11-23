#include <stdio.h>
#include <locale.h>

int ehprimo(int numero){
	int i, soma = 0;
	for(i = 1; i <= numero; i++){
		if(numero % i == 0){
			soma++;
		}	
	}
	if(soma == 2){
			return 1;
		}else{
			return 0;
		}
		
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, resultado;
	
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &num);
	
	resultado = ehprimo(num);
	printf("1 - primo ou 0 - Não primo:\n %d", resultado);
	
	}
	
