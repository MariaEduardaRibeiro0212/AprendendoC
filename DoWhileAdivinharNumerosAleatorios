#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //Tem uma função que gerar números pseudoaleatórios
#include <time.h> // Existem funções e tipos de dados para manipular informações de tempo e datas.

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int numeroAleatorio = rand () % 10 + 1, numero, i = 0;
	
	do{
	
		printf("Adivinhe um número entre 1 e 10 e digite-o:\n");
		scanf("%d", &numero);
		
		if(numero == numeroAleatorio){
			printf("Na mosca!! Você acertou!\n");
		}
		
		i++;
		
	}while(numero != numeroAleatorio);
	
	printf("Seu número de tentativas foi %d vezes.\n", i);
	
}
