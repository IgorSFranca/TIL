/*Elaborar um algoritmo que leia vários números positivos e imprimir o quadrado de
cada número até entrar um número múltiplo de 6 que deverá ter seu quadrado impresso também.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int num;
    printf("======================================================\n");
    printf("                        MULTIPLE 6                    \n");
    printf("======================================================\n\n");
    printf("Esse programa imprimira o quadrado do numero inserido,\n");
    printf("e quando for inserido um multiplo de 6, sera mostrado \n");
    printf("e o programa encerrado.\n\n");
    printf("-------------------------------------------------------\n\n");
    do {
        printf("Informe um numero: ");
        scanf("%i", &num);
        printf("O quadrado de %i eh %i.\n", num, (num*num));
    } while (num%6 != 0);
    system ("pause");
    return 0;
}