#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double altura, peso, imc;
	
	printf("Digite o seu peso:\n");
	scanf("%lf", &peso);
	
	printf("Digite sua altura:\n");
	scanf("%lf", &altura);
	
	imc = peso /(pow(altura, 2));
	
	printf("Seu Índice de Massa Corporea(IMC) é %.2lf\n", imc);
	
	if( imc <= 16.9 ){
		
		printf("Muito abaixo do peso.\n");
		
	}else if( imc >= 17 && imc <= 18.4){
		
		printf("Abaixo do peso.\n");
		
	}else if(imc >= 18.5 && imc <= 24.9){
		
		printf("Peso ideal.\n");
		
	}else if(imc >= 25 && imc <= 29.9){
		
		printf("Acima do peso.\n");
		
	}else if(imc >= 30 && imc <= 34.9){
		
		printf("Obesidade grau I.\n");
		
	}else if(imc >= 35 && imc <= 40){
		
	printf("Obesidade grau II.\n");	
		
	}else{
	
	printf("Obesidade grau III.\n");
		
	}
	
	}	
	
