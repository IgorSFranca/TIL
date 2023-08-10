#include <stdio.h>
#include <stdlib.h>

void cabecalho(float saldo), visualizar_saldo(float saldo);
float saque(float valor, float saldo), depositar(float valor, float saldo), pgto_cheque(float valor, float saldo);

int main (){
    float saldo = 0, valor; 
    int option;
    cabecalho(saldo);
    do {
        printf("Codigo da operacao: ");
        scanf("%i", &option);
        switch (option){
            case 10:
                saldo = saque(valor, saldo);
                visualizar_saldo(saldo);
                break;
            case 33:
                saldo = depositar(valor, saldo);
                visualizar_saldo(saldo);
                break;
            case 4:
                saldo = pgto_cheque(valor, saldo);
                visualizar_saldo(saldo);
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

float saque(float valor, float saldo){
    if (saldo <= 0){
        printf("Saldo insuficiente para saque.\n");
        return saldo;
    }
    do{
        printf("Valor do saque: R$ ");
        scanf("%f", &valor);
        if (valor <= 0)
            printf("Valor invalido para saque.\n");
        if (valor > saldo)
            printf("Saldo insuficiente para saque.\n");
    } while (valor > saldo||valor <= 0);
    printf("Saque realizado com sucesso.\n");
    saldo = saldo - valor;
    return saldo;
}

void visualizar_saldo(float saldo){
    printf("Saldo atual ......................... R$ %.2f\n\n", saldo);
    if (saldo < 0)
        printf("O Seu saldo esta negativo.\n");
}

float depositar(float valor, float saldo){
    do{
        printf("Valor do deposito: R$ ");
        scanf("%f", &valor);
        if (valor < 0)
            printf("Valor informado invalido.\n");
    } while (valor < 0);
    printf("Deposito realizado com sucesso.\n");
    saldo = saldo + valor;
    return saldo;
}

float pgto_cheque(float valor, float saldo){
    if (saldo <= 0){
        printf("Saldo insuficiente para pagamento de cheques.\n");
        return saldo;
    }
    do {
        printf("Valor do cheque: R$ ");
        scanf("%f", &valor);
        if (valor <= 0)
            printf("Valor invalido para pagamento.\n");
        if (valor > saldo){
            printf("saldo insuficiente para pagamento.\n");
            return saldo;
        }
    } while (valor <= 0);
    printf("Pagamento realizado com sucesso.\n");
    saldo = saldo - valor;
    return saldo;
}