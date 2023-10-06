#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num, c = 0;
	double quadrado;
	
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &num);
	
	while(c <= num){
		quadrado = pow(c,2);
		printf("Número %d e o seu quadrado é %.2lf\n\n", c, quadrado);
		c++;
		
}
}
