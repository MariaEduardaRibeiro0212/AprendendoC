#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Carro{
	char marca[50], modelo[50];
	int ano;
	float preco;	
};

typedef struct Carro Carro;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	Carro carro = {"Toyota", "Corolla", 2020, 30000.00};
	
	printf("Informações do carro:\n");
	printf("Marca: %s\n", carro.marca);
	printf("Modelo: %s\n", carro.modelo);
	printf("Ano: %d\n", carro.ano);
	printf("Preço: %.2f", carro.preco);
}
