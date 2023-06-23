#include <stdio.h>

int main (){
    int num, cont = 0, asw = 1;
    float soma = 0;
    printf("-------------------------------------------------\n");
    printf("                 Positive Numbers                \n");
    printf("-------------------------------------------------\n\n");
        do {
        printf("Informe um numero inteiro: ");
        scanf("%i", &num);
        if (num >= 0){
            soma = soma+num;
            cont ++;
        }
        printf("Deseja continuar inserindo numeros? [S = 1/N = 2]: ");
        scanf("%i", &asw);
        } while (asw == 1);
    printf("Foram digitados %i numero (s) positivos.\n", cont);
    printf("A media entre eles eh %.2f\n\n", (soma/cont));
    system("pause");
    return 0;
}