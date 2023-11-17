#include <stdio.h>
#include <locale.h>

struct Retangulo{
	double comprimento;
	double largura;
	double area;
};

typedef struct Retangulo Retangulo;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	Retangulo retangulo = {0.00, 0.00, 0.00};
	
	printf("Digite o comprimento do retângulo:\n");
	scanf("%lf", &retangulo.comprimento);
	fflush(stdin);
	
	printf("Digite a largura do retêngulo:\n");
	scanf("%lf", &retangulo.largura);
	
	retangulo.area = retangulo.comprimento * retangulo.largura;
	
	printf("A área do retângulo é %.2lf", retangulo.area);
}
