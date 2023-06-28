/*Elaborar um algoritmo que leia vários números positivos e imprimir o quadrado de
cada número até entrar um número múltiplo de 6 que deverá ter seu quadrado
impresso também*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;
    printf("================================\n");
    printf("     QUADRADO DE UM NUMERO \n");
    printf("================================\n\n");
    do {
        printf("Informe um numero: ");
        scanf("%i", &num);
        if (num > 0)
            printf("O quadrado do numero %i eh %i.\n", num, (num*num));
        else
            printf("Insira um numero positivo.\n");
    } while (num % 6 != 0);
    system ("pause");
    return 0;
}