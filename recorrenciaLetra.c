#include <stdio.h>
#include <string.h>

int main (){
	char frase[200];
	char letra;
	int contador = 0, i;
	
	printf("Digite uma frase:\n");
	fgets(frase, sizeof(frase), stdin);
	
	printf("Digite uma letra:\n");
	scanf("%c", &letra);
	
	for(i = 0; frase[i] != '\0'; i++){
		
		if(frase[i] == letra){
		contador++;	
		}
	}
	printf("Recorrência da letra %c na frase: %d", letra, contador);
}
