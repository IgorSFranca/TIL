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

void cabecalho();

int main (){
    int opcao;
    float saldo_atual = 1500;

    do{
        cabecalho();
        printf("Informe a opcao: ");
        scanf("%i", &opcao);
        switch (opcao){
            case 1: //Opção para mostrar o saldo atual
                printf("Saldo atual: %.2f\n", saldo_atual);
                break;
            case 2://Opção para sacar
            case 3://Opção para pagamento
            case 4://Opção para depósito
            case 0://Opção para sair
                printf("Programa encerrado.\n");
                break;
            default: 
                printf("Opcao nao encontrada.\n");
                break;
        }
    } while (opcao != 0);
    system ("pause");
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
