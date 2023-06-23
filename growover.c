/*Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca
tem 1,10m e cresce 3 centímetros por ano. Construir um algoritmo que
calcule e imprima quantos anos serão necessários para que Juca seja maior
que Chico. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char baixo[10], alto[10];
    float alt_b, alt_a;
    int cm_a, cm_b, ano = 0;
    printf("=======================================================\n");
    printf("                        GROW OVER                      \n");
    printf("=======================================================\n\n");
    printf("Informe o nome do mais baixo: ");
    scanf("%s", &baixo);
    printf("Informe a altura do mais baixo [cm]: ");
    scanf("%f", &alt_b);
    printf("Agora informe o cm de crescimento anual do mais baixo: ");
    scanf("%i", &cm_b);
    printf("--------------------------------------------------------\n");
    printf("Agora informe o nome do mais alto: ");
    scanf("%s", &alto);
    printf("Informe a altura do mais alto [cm]: ");
    scanf("%f", &alt_a);
    printf("Agora informe o cm de crescimento anual do mais alto: ");
    scanf("%i", &cm_a);
    printf("--------------------------------------------------------\n");
    while (alt_b <= alt_a){
        alt_b = alt_b + cm_b;
        alt_a = alt_a + cm_a;
        ano = ano + 1;
    }
    if (ano == 1)
        printf("Sera necessario 1 ano para que %s seja maior que %s.\n\n", baixo, alto);
    else
        printf("Serao necessarios %i anos para que %s seja maior %s.\n\n", ano, baixo, alto);
    system ("pause");
    return 0;
}