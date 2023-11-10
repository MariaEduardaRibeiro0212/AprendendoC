#include <stdio.h>
#include <string.h>
#define N  10

int main (){
	
	char s[N];
	//O gets subistuirá o scanf, o diferencial dele é que ele lerá os espaços 
	//em branco sem precisar daquela formatação mais complexa do scanf;
	printf("Digite qualquer coisa usando gets:\n");
	gets(s);
	fflush(stdin);
	
	//O puts substituirá o printf.
	//O puts pode ocasionar um estoro de memória, pois imprimirá mais caracteres do que
	//foi estabelecido.
	//Exemplo: Se for digitado "Maria Eduarda Ribeiro" ele imprirá exatamente o que foi
	//digitado sem levar em consideração o limite de caracteres.
	puts("\nResultado gets:\n");
	puts(s);
	puts("\n--------------------------------\n");
	
	//Parecido com gets, só que o fgets respeitará o limite de memória.
	//Exemplo: Se digitar "Maria Eduarda", vai printar apenas "Maria Edu", respeitando 
	//os 10 caracteres menos 1 nulo, que resta em 9 caracteres imprimidos.
	printf("Digite qualquer coisa usando fgets:\n");
	fgets(s, N, stdin);
	fflush(stdin);
	
	puts("\nResultado fgets:\n");
	puts(s);
	
	}
