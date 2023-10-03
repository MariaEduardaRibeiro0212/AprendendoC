#include <stdio.h>
#include <locale.h>

int main(){
		//Um construtura vende terrenos regulares. Faça um algorítimo para ler as dimenções de um terreno e depois informar a área desse terreno.
	setlocale(LC_ALL, "Portuguese");
	float largura, comprimento, area;
	
	printf("Largura do terreno:\n");
	scanf("%f", &largura);
	
	printf("Comprimento do terreno:\n");
	scanf("%f", &comprimento);
	
	area= largura*comprimento;
	
	printf("A área desse terreno é %.2f m².", area);
	
}
