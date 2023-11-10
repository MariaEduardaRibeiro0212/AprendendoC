#include <stdio.h>
#include <string.h>
#define N  50

int main (){
	
	char s1[N] = {"Agoritmo e "};
	char s2[N] = {"Programação Estruturada"};
	
	printf("Antes do strcat:\n");
	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	
	//Essa função concatena/mescla um vaiável na outra.
	//O que aconteceu aqui foi que a s2 foi incorprada/concatenada na s1.
	strcat(s1, s2);
	
	printf("Depois do strcat:\n");
	puts(s1);
	
}
