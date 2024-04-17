#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Estrutura cliente:
typedef struct _cliente {
    char nome[50];
    double saldoInicial;
} Cliente;

// Função criar cliente:
Cliente *create_cliente(const char *nome, double saldoInicial) {
    Cliente *cliente = calloc(1, sizeof(Cliente));
    strcpy(cliente->nome, nome);
    cliente->saldoInicial = saldoInicial;
    return cliente;
}

// Função para exibir os dados do cliente na tela:
void display_cliente(const Cliente *cliente) {
    printf("Nome completo: %s\n", cliente->nome);
    puts("---------------------------------");
    printf("SALDO ATUAL: R$ %.2lf \n", cliente->saldoInicial);
    puts("---------------------------------\n\n");
}

// Função sacar:
void sacar(Cliente *cliente, double valorSaque) {
    setlocale(LC_ALL, "Portuguese");
    if (cliente->saldoInicial >= valorSaque && valorSaque > 0) {
        cliente->saldoInicial -= valorSaque;
        printf("\nSaque realizado com sucesso!\n");
    } else {
        printf("Saldo insuficiente ou valor inválido!");
    }
}

// Função Depositar:
void depositar(Cliente *cliente, double valorDeposito) {
    setlocale(LC_ALL, "Portuguese");
    if (valorDeposito > 0) {
        cliente->saldoInicial += valorDeposito;
        printf("\nDepósito realizado com sucesso!\n");
    } else {
        printf("Você digitou um valor inválido!");
    }
}

// Função Transferir:
void transferir(Cliente *remetente, Cliente *destinatario, double valorTransferencia) {
    setlocale(LC_ALL, "Portuguese");
    if (remetente->saldoInicial >= valorTransferencia && valorTransferencia > 0) {
        remetente->saldoInicial -= valorTransferencia;
        destinatario->saldoInicial += valorTransferencia;
        printf("\nTransferência realizada com sucesso!\n");
    } else {
        printf("Saldo insuficiente ou você digitou um valor inválido!");
    }
}

// Função para liberar a memória alocada:
void liberaMemoria(Cliente **cliente_ref) {
    Cliente *cliente = *cliente_ref;
    free(cliente);
    *cliente_ref = NULL;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    double valor, valorD, valorT;
    int opcao;
    char numContaDestino[30];
    
    // Criando dois clientes:
    Cliente *maria = create_cliente("Maria", 560.99); 
    Cliente *lucas = create_cliente("Lucas", 20980.63);
    
    do {
        system("cls || clear"); 
        
        // Menu das funcionalidades do banco:
        printf("\n\n*BEM-VINDO AO BANCO ESTRUTURA DE DADOS UCB*\n\n");    
        printf("Escolha uma de nossas opções:\n");
        puts("1 - Ver saldo;");
        puts("2 - Sacar;");
        puts("3 - Depositar;");
        puts("4 - Transferir;");
        puts("5 - Sair.");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                display_cliente(maria); // Os dados da cliente Maria serão printados na tela
                break;
                
            case 2:
                printf("Digite o valor que deseja sacar: R$");
                scanf("%lf", &valor);
                sacar(maria, valor);
                break;
                
            case 3:
                printf("Digite o valor que deseja depositar: R$");
                scanf("%lf", &valorD);
                depositar(maria, valorD);
                break;
                
            case 4:
            	printf("Digite o número da conta Destino: \n");
				scanf("%s", &numContaDestino);
                printf("Digite o valor que deseja transferir: R$");
                scanf("%lf", &valorT);
                transferir(maria, lucas, valorT); // Aqui há uma interação entre os dois clientes
                break;
                
            case 5:
                printf("\nObrigado por usar o banco Estrutura de Dados UCB!!\n");
                break;
                
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
        
        printf("\nPressione Enter para continuar...");
        getchar(); 
        getchar(); 
        
    } while(opcao != 5);
    
    /*display_cliente(lucas); //Conferir a conta do destinatário */
    
    liberaMemoria(&maria);
    liberaMemoria(&lucas);    
    
    return 0;
}
