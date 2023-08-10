#include <stdio.h>
#include <stdlib.h>

void cabecalho(float saldo);

int main (){
    float saldo = 0, valor; 
    int option;
    cabecalho(saldo);
    do {
        printf("Codigo da operacao: ");
        scanf("%i", &option);
        switch (option){
            case 10:
                printf("Valor do saque: R$ ");
                scanf("%f", &valor);
                saldo = saldo - valor;
                printf("Saldo atual ......................... R$ %.2f\n\n", saldo);
                if (saldo < 0)
                    printf("O Seu saldo esta negativo.\n");
                break;
            case 33:
                printf("Valor do deposito: R$ ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                printf("Saldo atual ......................... R$ %.2f\n\n", saldo);
                break;
            case 4:
                printf("Valor do cheque: R$ ");
                scanf("%f", &valor);
                saldo = saldo - valor;
                printf("Saldo atual ......................... R$ %.2f\n\n", saldo);
                if (saldo < 0)
                    printf("O Seu saldo esta negativo.\n");
                break;
            case 0:
                break;
        }
    } while (option != 0);
    printf("Programa encerrado\n");
    system ("pause");
    return 0;
}

void cabecalho(float saldo){
    printf("=============================================\n");
    printf("               EXTRATO BANCARIO              \n");
    printf("=============================================\n");
    printf("            Operacoes disponiveis            \n");
    printf("[10] Saque em dinheiro                       \n");
    printf("[33] Deposito                                \n");
    printf("[ 4] Pagamento de Cheque                     \n");
    printf("[ 0] Para encerrar                           \n");
    printf("---------------------------------------------\n");
    printf("Saldo inicial ....................... R$ %.2f\n\n", saldo);

}