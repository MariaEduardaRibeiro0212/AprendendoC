#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char opcaoC;
	int acertos = 0, erros = 0;
	
	printf("------------------------Quiz de revisão-----------------------\n");
	printf("\n");
	
	printf("Respondas as questões de múltipla escolha abaixo:\n");
	
	//Questão 1:
	printf("\n Questão 1: Qual é a sintaxe correta para declarar uma variável inteira em C?\n");
	printf("a) int x;\n");
	printf("b) var x;\n");
	printf("c) integer x;\n");
	printf("d) número x;\n");
	fflush(stdin);
	scanf("%c", &opcaoC);
	printf("\n");
	
	if(opcaoC == 'a'){
		printf("Você acertou!!!\n");
		acertos++;
		
	}else{
		printf("Que pena, você errou!\n");
		erros++;
	}

	//Questão 2:
	
	printf("\nQuestão 2: Qual é a função usada para imprimir no console em C?\n");
	printf("a) print();\n");
	printf("b) console.log();\n");
	printf("c) printtext();\n");
	printf("d) printf();\n");
	fflush(stdin);
	scanf("%c", &opcaoC);
	printf("\n");
	
	if(opcaoC == 'd'){
		printf("Você acertou!!!\n");
		acertos++;
		
	}else{
		printf("Que pena, você errou!\n");
		erros++;
	}
	
	//Questão 3:
	
	printf("\nQuestão 3: O que o operador '==' faz em C?\n");
	printf("a) Atribui um valor a uma variável.\n");
	printf("b) Compara dois valores.\n");
	printf("c) Divide dois valores.\n");
	printf("d) Multiplica dois valores.\n");
	fflush(stdin);
	scanf("%c", &opcaoC);
	printf("\n");
	
	if(opcaoC == 'b'){
		printf("Você acertou!!!\n");
		acertos++;
		
	}else{
		printf("Que pena, você errou!\n");
		erros++;
	}
	
	//Questão 4:
	
	printf("\nQuestão 4: Qual é o operador lógico para 'OU' em C?\n");
	printf("a) &&\n");
	printf("b) ||\n");
	printf("c) !\n");
	printf("d) <>\n");
	fflush(stdin);
	scanf("%c", &opcaoC);
	printf("\n");
	
	if(opcaoC == 'b'){
		printf("Você acertou!!!\n");
		acertos++;
	}else{
		printf("Que pena, você errou!\n");
		erros++;	
	}
	
	//Questão 5:
	printf("\nQuestão 5: Qual é a estrutura de controle usada para repetição em C?\n");
	printf("a) if\n");
	printf("b) switch\n");
	printf("c) for\n");
	printf("d) else\n");
	fflush(stdin);
	scanf("%c", &opcaoC);
	printf("\n");
	
	if(opcaoC == 'c'){
		printf("Você acertou!!!\n");
		acertos++;	
		
	}else{
		printf("Que pena, você errou!\n");
		erros++;	
	}
	
	//Questão 6:
	
	printf("\nQuestão 6: Qual é a função usada para ler um número inteiro do teclado em C?\n");
	printf("a) read_integer();\n");
	printf("b) input_int();\n");
	printf("c) scanf();\n");
	printf("d) get_int();\n");
	fflush(stdin);
	scanf("%c", &opcaoC);
	printf("\n");
	
	if(opcaoC == 'c'){
		printf("Você acertou!!!\n");
		acertos++;	
		
	}else{
		printf("Que pena, você errou!\n");
		erros++;	
	}
	
	//Questão 7:
	printf("\nQuestão 10: Qual é o valor da expressão 5 + 3 * 2 em C?\n");
	printf("a) 16\n");
	printf("b) 11\n");
	printf("c) 13\n");
	printf("d) 10\n");
	fflush(stdin);
	scanf("%c", &opcaoC);
	printf("\n");
	
	if(opcaoC == 'b'){
		printf("Você acertou!!!\n");
		acertos++;	
		
	}else{
		printf("Que pena, você errou!\n");
		erros++;	
	}
	printf("\n -------------PLACAR------------\n");
	printf("Acertos: %d\n", acertos);
	printf("Erros: %d\n", erros);
	
	if(erros == 0){
		printf("Situação: Excelente, continue assim.\n");
		
	}else if(erros <= 2){
		printf("Situação: Muito bom.\n");
		
	}else if(erros >= 3){
		printf("Situação: Péssimo, estude mais.\n");
	}
		
}
