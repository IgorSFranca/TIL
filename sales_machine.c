/*Faça um sistema para uma máquina automática de vendas. O usuário
informa o código do produto desejado e insere cédulas para efetivar a
compra. A máquina não aceita moedas, apenas as seguintes cédulas: 2, 5,
10, 20 e 50, e permite comprar apenas um item por vez
O usuário insere as notas até atingir o valor do item selecionado
Ela pode dar troco em cédulas, ou moedas de $1, sempre priorizando as
maiores cédulas */

#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao, ced, dev, pgto = 0;
    printf("==================================================================================\n");
    printf("                                     SALES MACHINE                                \n");
    printf("==================================================================================\n\n");
    printf("                                       ~~MENU~~                                   \n");
    printf("[1] Chocolate ............................................................ R$ 3,00\n");
    printf("[2] Refrigerante                                                           R$ 4,00\n");
    printf("[3] Sanduiche ............................................................ R$ 7,00\n");
    printf("[4] Cerveja                                                                R$ 6,00\n");
    printf("[5] Fruta ................................................................ R$ 1,00\n");
    printf("[6] Agua                                                                   R$ 2,00\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("Informe a sua opcao de compra: ");
    scanf("%i", &opcao);
    switch (opcao){
        case 1: dev = 3; break;
        case 2: dev = 4; break;
        case 3: dev = 7; break;
        case 4: dev = 6; break;
        case 5: dev = 1; break;
        case 6: dev = 2; break;
    }
    printf("Valor devido: R$ %i reais\n", dev);
    while (dev > 0){
        printf("Insira o valor da cedula para pagamento [R$ 2, R$ 5, R$ 10, R$ 20 ou R$ 50]: R$ ");
        scanf("%i", &ced);
        while (ced != 2 && ced != 5 && ced != 10 && ced != 20 && ced != 50){
            printf("Valor de cedula inexistente.\n");
            printf("Informe uma cedula valida [R$ 2, R$ 5, R$ 10, R$ 20 ou R$ 50]: R$ ");
            scanf("%i", &ced);
        }
        dev = dev - ced;
        printf("O valor devido atualizado eh R$ %i reais.\n", dev);
        if (dev == 0){
            printf("A conta foi paga. Nao ha troco e necessidade de complemento. \n");
            break;
        }
    } 
    dev = (dev*-1);
    printf("----------------------------------------------------------------------------------\n");
    printf("Devido a nota informada, sobra o troco de R$ %i reais.\n", (dev));
    printf("Serao fornecidos as seguintes notas e/ou moedas: \n");
    while (dev > 0){
        if (dev / 50 >= 1){
            printf("Sera (ao) devolvida %i nota (s) de R$ 50,00\n", (dev/50));
            dev = dev % 50;
        }
            else if (dev / 20 >= 1){
                printf("%i nota (s) de R$ 20,00\n", (dev/20));
                dev = dev % 20;
            }
                else if (dev / 10 >= 1){
                    printf("%i nota (s) de R$ 10,00\n", (dev/10));
                    dev = dev % 10;
                }
                    else if (dev / 5 >= 1){
                        printf("%i nota (s) de R$ 5,00\n", (dev/5));
                        dev = dev % 5;
                    } 
                        else if (dev / 2 >= 1){
                            printf("%i nota (s) de R$ 2,00\n", (dev/2));
                            dev = dev % 2;
                        }
                            else{
                                printf("%i moeda (s) de R$ 1,00\n", dev);
                                break;
                            }
    }
    printf("----------------------------------------------------------------------------------\n\n");
    system ("pause");
    return 0;
}