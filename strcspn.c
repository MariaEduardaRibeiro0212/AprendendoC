#include <stdio.h>
#include <string.h>
#define N 5 

int main (){
	char staticText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
	
	printf("Digite uma frase\n");
	
	fgets(senha_usr, sizeof(senha_usr), stdin);
	
	senha_usr[strcspn(senha_usr, "\n")] = '\0';
	
	ok = strcmp(staticText, senha_usr);
	
	if(ok == 0) {
	printf("Frase identica\n");
	
	}else {
	printf("Frase não confere\n");
	}
}
