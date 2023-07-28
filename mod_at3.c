/*Faça uma solução usando modularidade para automatizar um sistema bancário de um caixa eletrônico. 
O menu a seguir deve ser exibido ao usuário enquanto a opção informada por ele seja diferente de SAIR:
1.SALDO 
2.SAQUE 
3.PAGAMENTO 
4.DEPOSITO 
0.SAIR
Para cada opção, mostre o saldo no início, e informe ao usuário se a
operação escolhida foi realizada com sucesso ou não.
Considere saldo inicial igual $1500

O sistema deve ser consistente: não permitir saque sem ter saldo; não permitir sacar,
depositar ou pagar valor menor ou igual a zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void cabecalho(), saldo(float);

float sacar(float), pagamento(float);

int main (){
    int opcao;
    float saldo_atual = 1500;

    do{
        cabecalho();
        printf("Informe a opcao: ");
        scanf("%i", &opcao);
        switch (opcao){
            case 1: //Mostrar o saldo
                saldo(saldo_atual);
                break;
            case 2://Sacar
                saldo(saldo_atual);
                saldo_atual = sacar(saldo_atual);
                break;
            case 3://Pagamento
                saldo(saldo_atual);
                saldo_atual = pagamento(saldo_atual);
                break;
            case 4://Depósito
            case 0://Sair
                printf("Programa encerrado.\n");
                break;
            default: 
                printf("Opcao nao encontrada.\n");
                break;
        }
    } while (opcao != 0);
    return 0;
}

void cabecalho(){
    printf("++++++++++++++++++++++++++++++\n");
    printf("+             ~#~            +\n");
    printf("+       SISTEMA BANCARIO     +\n");
    printf("+             ~#~            +\n");
    printf("++++++++++++++++++++++++++++++\n");
    printf("+            OPCOES          +\n");
    printf("+ [1] SALDO                  +\n");
    printf("+ [2] SACAR                  +\n");
    printf("+ [3] PAGAMENTO              +\n");
    printf("+ [4] DEPOSITO               +\n");
    printf("+ [0] SAIR                   +\n");
    printf("++++++++++++++++++++++++++++++\n\n");
}

void saldo(float saldo){
    printf("Saldo disponivel: %.2f\n", saldo);
    printf("\n");
}

float sacar(float saldo){
    float valor;
    printf("\n");
    printf("Informe o valor que deseja sacar: R$ ");
    scanf("%f", &valor);
    printf("-> Operacao realizada.\n");
    printf("\n");
    return (saldo-valor);
}

float pagamento(float saldo){
    float valor_pagamento;
    printf("\n");
    if (saldo <= 0)
        printf("Saldo insuficiente para realizar pagamentos.\n");
    else{
        printf("Informe o valor que deseja fazer pagamento: R$ ");
        scanf("%f", &valor_pagamento);
        if (valor_pagamento > saldo)
            printf("Saldo insuficiente para realizar este pagamento.\n");
        else 
            return (saldo-valor_pagamento);
    }
}



