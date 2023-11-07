#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//Trabalhando com strings, na prática é um vetor de char
	//%s
	//fflush(stdin) para limpar a memória e não dá erros.
	// ^ = espaço em branco
	//Não aaprimorado: scanf("%s", nome); = só lerá uma palavra antes do espaço em branco e estrapolara o limite de memória.
	//Aprimorado: scanf(%5[^\n]s", nome) = lerá 5 caracteres  incluindo espaços em branco.
	//get(s): gets(s) = subistitui o scanf; puts(s)= printa a string - Estrapola memória
	//fgets (s, sizeof(s), stdin)- não deixa a memória ser estrapolada
	
	//Cabeçalho : string.h
	
	}
