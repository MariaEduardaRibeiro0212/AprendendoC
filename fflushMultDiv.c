#include<stdio.h>


int main (){
	/*
	Escreva um programa que pessa dois números a um usuário e exiba a soma deles. Depois modifique o programa para que subtraia os números.
	*/
	int n1, n2, mult, div;
	

	printf("Digite o primeiro número: \n");
	scanf("%d", &n1);
	
	printf("Digite o segundo número: \n");
	scanf("%d", &n2);
	fflush(stdin); //Utilizar depois do scanf para descarregar a memória e evitar erros/bugs
	
	mult =  n1*n2;
	div = n1/n2;
	
	
	printf("Resultado multiplicação: %d\n", mult);
	printf("Resultado divisão: %d\n", div);
		
		
}
