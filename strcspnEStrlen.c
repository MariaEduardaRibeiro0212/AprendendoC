#include <stdio.h>
#include <string.h>
#define N  10

int main (){
	
	char s[N];
	int i;
	
	printf("Digite uma texto:\n");
	fgets(s, N, stdin);
	
	//Função que contabiliza a quantidade de caracter de uma sequência de strings.
	s[strcspn(s, "\n")] = '/0';
	
	//"Ler" os caracteres e indica a posição de cada um deles no índice
	i = strlen(s);
	
	printf("\n Tamanho do texto digitado: %d\n", i);
	printf("Impressão de posição em posição\n");
	
	for(i = 0; i < strlen(s); i++){
		printf("%d - %c \n", i, s[i]);
	}
}
