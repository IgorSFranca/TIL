/* Elaborar um algoritmo que leia vários números até entrar o número -999. Para cada
número imprimir seus divisores. */

#include <stdio.h>
#include <stdlib.h>

int main (){
    int num, cont = 0;
    printf("===============================================\n");
    printf("                    DIVISION                   \n");
    printf("===============================================\n\n");
    printf("Apos inserir o eu numero (inteiro e positivo),\n");
    printf("serao mostrados os seus divisores. \n");
    printf("Informe -999 para sair. \n");
    printf("------------------------------------------------\n");
    do {
        printf("\nInforme um numero: ");
        scanf("%i", &num);
        printf("Os divisores de %i sao: ", num);
        do {
            cont ++;
            if (num % cont == 0)
                printf("%i ", cont);
        } while (num != cont-1);
        cont = 0;
    } while (num != -999);
    system ("pause");
    return 0;
}