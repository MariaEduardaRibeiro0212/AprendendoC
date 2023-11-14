#include <stdio.h>
#include <string.h>

int main (){
	char nome[10];
	int percorrerArrayString, i;
	
	printf("Digite o seu primeiro nome:\n");
	fgets(nome, sizeof(nome), stdin);
	
	nome[strcspn(nome, "\n")] = '\0';
	
	percorrerArrayString = strlen(nome);
		
		printf("Seu nome investido:\n");
	for(i = percorrerArrayString; i >= 0; i--){
		printf("%c", nome[i]);
	}
}
