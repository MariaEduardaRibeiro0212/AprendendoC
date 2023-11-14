#include <stdio.h>
#include <string.h>

int main (){
	char usuario[10], cola[10];
	
	printf("Digite uma palavra de até 9 letras:\n");
	fgets(usuario, sizeof(usuario), stdin);
	
	printf("\nAntes do strcpy:\n");
	puts(usuario);
	puts(cola);
	
	strcpy(cola, usuario);
	printf("Depois do strcpy:\n");
	puts(usuario);
	puts(cola);
}
