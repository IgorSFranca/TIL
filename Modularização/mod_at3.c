/* Nome do arquivo: mod_at3.c
 * Descrição: atividade 3 da aula de modularização do curso de Engenharia da Computação da UFGD.
        Faça uma solução usando modularidade para automatizar um sistema bancário de um caixa eletrônico. 
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
        depositar ou pagar valor menor ou igual a zero.
 * Autor: Igor França
 * Data de criação: 28 de julho de 2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void cabecalho(), saldo(float);

float sacar(float), pagamento(float), deposito(float);

int main (){
    char resp = 's';
    int opcao;
    float saldo_atual = 1500;

    do{
        system ("cls");
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
                saldo(saldo_atual);
                saldo_atual = deposito(saldo_atual);
                break;
            case 0://Sair
                resp = 'n';
                printf("Programa encerrado.\n");
                break;
            default: 
                printf("Opcao nao encontrada.\n");
                break;
        }
        if (opcao == 0)
            break;
        else{
            printf("\n");
            printf("Continuar [s/n]: ");
            scanf(" %c", &resp);
            resp = tolower(resp);
        }
    } while (opcao != 0 && resp != 'n');
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
    printf("Informe o valor que deseja sacar: R$ ");
    scanf("%f", &valor);
    if (valor <= 0){
        printf("Valor invalido para esta operacao.\n");
        printf("Operacao nao realizada.\n");
        return saldo;
    }
    if (valor > saldo){
        printf("Saldo insuficiente.\n");
        printf("Operacao nao realizada.\n");
        return saldo;
    }
    else{
        printf("Operacao realizada com sucesso.\n");
        return (saldo-valor);
    }
}

float pagamento(float saldo){
    float valor_pagamento;
    if (saldo <= 0){
        printf("Saldo insuficiente para realizar pagamentos.\n");
        printf("Operacao nao realizada.\n");
        return saldo;
    }
    else{
        printf("Informe o valor que deseja fazer pagamento: R$ ");
        scanf("%f", &valor_pagamento);
        if (saldo < valor_pagamento){
            printf("Saldo insuficiente para realizar este pagamento.\n");
            printf("Operacao nao realizada.\n");
            return saldo;
        }
        if (valor_pagamento < 0){
            printf("Valor invalido para esta operacao.\n");
            printf("Operacao nao realizada.\n");
            return saldo;
        }
        else {
            printf("Operacao realizada com sucesso.\n");
            return (saldo-valor_pagamento);
        }
    }
}

float deposito(float saldo){
    float valor_deposito;
    printf("Informe o valor a ser depositado: ");
    scanf("%f", &valor_deposito);
    if (valor_deposito <= 0){
        printf("Valor invalido para esta operacao.\n");
        printf("Operacao nao realizada.\n");
        return saldo;
    }
    else {
        printf("Operacao realizada com sucesso.\n");
        return (saldo+valor_deposito);
    }

}












