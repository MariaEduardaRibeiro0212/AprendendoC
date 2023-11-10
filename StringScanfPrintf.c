#include <stdio.h>
#include <string.h>

int main (){
	
	char s[10];
	
	//Forma Normal/não aprimoorada:
	printf("Digite qualquer coisa com scanf normal:\n");
	scanf("%s", &s);
	fflush(stdin);
	
	//Só printa uma palavra que vem antes do espaço:
	//Por exemplo: Se digitar "Maria Eduarda", vai printar apenas "Maria"
	printf("O printf não aprimorado - Foi digitado %s\n", s);
	
	/*O scanf fará referência ao número de caracteres (%9) no caso 10 - 1,
	 pois o último caracter é  o caráter nulo.
	 [^\n] - Serve para ler os espaços em branco
	 Exemplo: Se digitar "Maria Eduarda", vai printar apenas "Maria Edu", respeitando 
	 os 10 caracteres menos 1 nulo, que resta em 9 caracteres imprimidos.*/
	printf("\nDigite qualquer coisa com scanf aprimorado:\n");
	scanf("%9[^\n]s", &s);
	fflush(stdin);
	
	printf("O printf aprimorado - Foi digitado %s\n", s);	
}
