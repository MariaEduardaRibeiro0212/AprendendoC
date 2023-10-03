#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double saldo = 1000, saque, dinheiro;
	
	printf("---Caixa eletrônico---\n");
	
	printf("Digite o valor em que deseja sacar:\n");
	scanf("%lf", &dinheiro);
	
	if(dinheiro > saldo){
		
		printf("Saldo indisponível para saque\n");
		
	}else if( dinheiro <= saldo && dinheiro > 0){
		
		saque = saldo - dinheiro;
		printf("Saque de R$%.2lf realizado com sucesso.\n", dinheiro);
		printf("Saldo Atual: R$%.2lf\n", saque);
		
	} else{
		printf("ERRO\n");
		printf("Digite um valor válido.\n");
	}
	}	
