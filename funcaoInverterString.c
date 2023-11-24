#include <stdio.h>
#include <string.h>


char inverterString(char string[50]){
	char resultado;
	int i , percorrerArrayString;
	
	string[strcspn(string, "\n")] = '\0';
	
	percorrerArrayString = strlen(string);
		
	for(i = percorrerArrayString; i >= 0; i--){
		 printf("%c", string[i]);
		resultado = string[i];
	}
	return resultado;	
}
int main (){
	char nome[50];
	char invercao;
	
	printf("Digite o seu primeiro nome:\n");
	fgets(nome, sizeof(nome), stdin);
	
	printf("Seu nome investido:\n");
	invercao = inverterString(nome);
	puts(invercao);
}
