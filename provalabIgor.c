#include <stdio.h>
#include <stdlib.h>

int main (){
    float valor;
    int ano;
    printf("---------------------------------------------\n");
    printf("                 Loja de Carros              \n");
    printf("---------------------------------------------\n\n");
    printf("Informe o valor do veiculo: ");
    scanf("%f", &valor);
    if (valor>0){
        printf("Informe o ano do veiculo: ");
        scanf("%i", &ano);
        if (ano >= 0){
            if (ano < 2000){
                printf("O valor a pagar com desconto eh de: R$ %.2f\n", valor*0.85);
                printf("O valor a pagar sem desconto eh de: R$ %.2f\n", valor);
            }
            else if(ano >= 2000 && ano <= 2004){
                if (valor >=25000 && valor <= 35000){
                    printf("O valor a pagar a vista com desconto eh de: R$ %.2f\n", valor*0.9);
                    printf("O valor a pagar a prazo com desconto eh de: R$ %.2f\n", valor*0.97);
                    printf("O valor a pagar sem desconto eh de: R$ %.2f\n", valor);
                }
                else{
                    printf("O valor a pagar com desconto eh de: R$ %.2f\n", valor*0.97);
                    printf("O valor a pagar sem desconto eh de: R$ %.2f\n", valor);
                }
            }
        }
        else 
            printf("Ano negativo nao aceito.\n");
        }
    else
        printf("Valor negativo nao aceito.\n");
    system ("pause");
    return 0;
}
/*

************************
***** Atividade 01 ***** 
************************



************************
***** Atividade 02 ***** 
************************

#include <stdio.h>
#include <stdlib.h>

int main (){
    int itens;
    printf("--------------\n");
    printf("LOJA DE CAIXAS\n");
    printf("--------------\n\n");
    printf("Capacidade de armazenagem: \n");
    printf("Caixa G: max 13 itens\n");
    printf("Caixa M: max 7 itens\n");
    printf("Caixa P: max 4 itens\n");
    printf("--------------------\n");
    printf("Informe quantos itens deseja guardar: ");
    scanf("%i", &itens);
    printf("Serao necessarias: \n");
    if (itens/13 >= 1){
        printf("%i caixas G\n", (itens/13));
        itens = itens % 13;
    }
    if (itens/7 >= 1){
        printf("%i caixas M\n", (itens/7));
        itens = itens % 7;
    }
    if (itens/4 >= 1){
        printf("%i caixas P\n", (itens/4));
        itens = itens % 4;
    }
    printf("E sobrarao %i itens para completar uma nova caixa.\n", itens);


    system ("pause");
    return 0;
}
************************
***** Atividade 03 ***** 
************************

#include <stdio.h>
#include <stdlib.h>

int main (){
    int m, n, mult = 0, soma = 0;
    char resp = 'n';
    printf("-----------------------------------------------------------------\n");
    printf("        Quantidade de Multiplos de 3 e Soma dos Multiplos de 5   \n");
    printf("-----------------------------------------------------------------\n\n");
    printf("Voce devera inserir 2 numeros [M e N], contudo, M precisa ser    \n");
    printf("menor, ou igual, que N. E ambos precisam ser inteiros e positivos\n");
    printf("-----------------------------------------------------------------\n");
    printf("Para encerrar digite: M maior que N ou N/M Negativo.\n");
    printf("-----------------------------------------------------------------\n");
    while (resp == 'n'||resp == 'N'){
        do{
            printf("Informe o valor de N: ");
            scanf("%i", &n);
            printf("Agora informe o valor de M: ");
            scanf("%i", &m);
            if (m>n){
                printf("O valor de M informado eh maior que o de N.\n");
                break;
            }
            if (m%3 == 0|| n%3 == 0)
                mult++;
            if (n%5 == 0|| n%5 == 0)
                soma = soma + n;
        } while (m>=0 && n>= 0);
        printf("Deseja finalizar? [s/n]: ");
        scanf("%s", &resp);
    }
    printf("\nForam inseridos %i numeros multiplos de 3.\n", mult);
    printf("A soma dos valores multiplos de 5 eh %i,\n", soma);
    system ("pause");
    return 0;
}
************************
***** Atividade 04 ***** 
************************


#include <stdio.h>
#include <stdlib.h>

int main (){
    int regiao, itens; 
    float total;
    printf("-----------------------------------------\n");
    printf("        PAINEL DE COMPRA COM FRETE       \n");
    printf("-----------------------------------------\n");
    printf("Percentual de frete conforme regiao\n");
    printf("[1] Norte:                           10%%\n");
    printf("[2] Nordeste:........................ 8%%\n");
    printf("[3] Centro Oeste:                    12%%\n");
    printf("[4] Sudeste:........................ 15%%\n");
    printf("[5] Sul:                             11%%\n");
    printf("Valor fixo do item:............ R$ 10,00.\n");
    printf("-----------------------------------------\n\n");
    printf("Informe a quantidade de itens de compra: ");
    scanf("%i", &itens);
    if (itens>0){
        printf("Informe a regiao que deseja entregar: ");
        scanf("%i", &regiao);
        switch (regiao){
            case 1: 
                total = itens*10;
                printf("\nRegiao escolhida: Norte\n");
                printf("Valor total dos itens: R$ %.2f\n", total);
                printf("Total do frete: R$ %.2f\n", (itens*10*0.1));
                printf("Valor total com frete: R$ %.2f\n", (itens*10*1.1));
                break;
            case 2:
                total = itens*10;
                printf("\nRegiao escolhida: Nordeste\n");
                printf("Valor total dos itens: R$ %.2f\n", total);
                printf("Total do frete: R$ %.2f\n", (itens*10*0.08));
                printf("Valor total com frete: R$ %.2f\n", (itens*10*1.08));
                break;
            case 3:
                total = itens*10;
                printf("\nRegiao escolhida: Centro Oeste\n");
                printf("Valor total dos itens: R$ %.2f\n", total);
                printf("Total do frete: R$ %.2f\n", (itens*10*0.12));
                printf("Valor total com frete: R$ %.2f\n", (itens*10*1.12));
                break;
            case 4: 
                total = itens*10;
                printf("\nRegiao escolhida: Sudeste\n");
                printf("Valor total dos itens: R$ %.2f\n", total);
                printf("Total do frete: R$ %.2f\n", (itens*10*0.15));
                printf("Valor total com frete: R$ %.2f\n", (itens*10*1.15));
                break;
            case 5:
                total = itens*10;
                printf("\nRegiao escolhida: Sul\n");
                printf("Valor total dos itens: R$ %.2f\n", total);
                printf("Total do frete: R$ %.2f\n", (itens*10*0.11));
                printf("Valor total com frete: R$ %.2f\n", (itens*10*1.11));
                break;
            default:
                printf("Opcao invalida.");
                break;
        }
        printf("Programa finalizado.\n");
        }
    else
        printf("Quantidade negativa nao aceita.\n");
    system ("pause");
    return 0;
}*/