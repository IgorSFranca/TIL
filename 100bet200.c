/*Elaborar um algoritmo que leia números e imprima no final
quantos números entre 100 e 200 foram digitados. Quando o valor 0 (zero)
for lido, o algoritmo deve parar a sua execução. */

#include <stdio.h>
#include <stdlib.h>

int main (){
    int num, cont = 0, asw = 1;
    printf("---------------------------------\n");
    printf("         100 between 200         \n");
    printf("---------------------------------\n\n");
    do {
    printf("Informe um numero inteiro: ");
    scanf("%i", &num);
    if (num >= 100 && num <= 200)
        cont ++;
    printf ("Deseja continuar inserindo numeros? [0 = Nao]: ");
    scanf("%i", &asw);
    } while (asw != 0);
    if (cont == 1)
        printf("\nFoi inserido %i numero entre 100 e 200.\n\n", cont);
    else if (cont == 0)
        printf("\nNao foram inseridos numeros entre 100 e 200.\n\n");
    else
        printf("\nForam inseridos %i numeros entre 100 e 200.\n\n", cont);
    system ("pause");
    return 0;
}