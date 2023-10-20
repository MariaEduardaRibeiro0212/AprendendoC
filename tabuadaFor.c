#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, i = 1, calculo;
	
	printf("Digite um número no qual deseja saber a tabuada dele:\n");
	scanf("%d", &num);
	printf("\n");
	
	printf("---A tabuada do %d:---\n", num);

	for(i; i <= 10; i++){
		
		printf("%d x %d = %d \n",num, i, num*i);
	}	
		
}
