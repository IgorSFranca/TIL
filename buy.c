#include <stdio.h>
#include <string.h>

int main (){
    int option, qtd, qtd_total_1 = 0, qtd_total_2 = 0, asw;
    float total_buy_1 = 0, total_buy_2 = 0;
    printf("===============================\n");
    printf("         MENU DE COMPRA        \n");
    printf("===============================\n");
    printf("Produto [1]: Camiseta Polo     \n");
    printf("Valor: R$ 100,00               \n");
    printf("-------------------------------\n");
    printf("Produto [2]: Camisa social Polo\n");
    printf("Valor: R$ 300,00               \n");
    printf("-------------------------------\n\n");
    do{
    printf("Informe o numero do item desejado: ");
    scanf("%i", &option);
    printf("Informe a quantidade desejada: ");
    scanf("%i", &qtd);
    printf("Deseja continuar comprando [S = 1/N = 0]? ");
    scanf("%i", &asw);
    printf("-------------------------------\n");
        if (option == 1){
            qtd_total_1 = qtd_total_1 + qtd;
            total_buy_1 = total_buy_1 + (qtd*100);
        }
        else if (option == 2){
            qtd_total_2 = qtd_total_2 + qtd;
            total_buy_2 = total_buy_2 + (qtd*300);
        }
    } while (asw == 1);
    printf("Compra finalizada.\n");
    printf("-------------------------------\n");
    printf("Resumo da venda:\n");
    printf("Foram comprados %i Camiseta (s) Polo, com valor total de %.2f.\n", qtd_total_1, total_buy_1);
    printf("Foram comprados %i Camisa (s) Social Polo, com valor total de %.2f.\n",qtd_total_2, total_buy_2);
    printf("Foram comprados %i itens no total, com o valor total a pagar de %.2f.\n",(qtd_total_1+qtd_total_2), (total_buy_1+total_buy_2));
    system ("pause");
    return 0;
}