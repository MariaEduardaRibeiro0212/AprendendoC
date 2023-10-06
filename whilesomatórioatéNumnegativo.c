#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num, c = 0, soma= 0;
	
	//1 = verdadeira, essa sentência vai ser verdadeira sempre.
	while(1){
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &num);
	//O if vai trazer uma condicional para que a setência se torne falsa.
	if(num <0){
		//O break vai parar o programa quando a sentência se tornar falsa e o número negativo vai ser ignorado na hora dos calculos.
		break;
	}
	soma= soma + num;
	c++;
	}	
	printf("Somátório da sequência de número é %d\n",soma);	
}
