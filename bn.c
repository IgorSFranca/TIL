#include <stdio.h>
#include <stdlib.h>

int main (){
    int base, n, total = 1, cont = 0;
    printf("------------------------\n");
    printf("       CALCULE B^n      \n");
    printf("------------------------\n\n");
    printf("Informe o valor da base B: ");
    scanf("%i", &base);
    printf("Informe o valor do expoente N: ");
    scanf("%i", &n);
    cont = n;
    while (cont>0){
        total = total*base;
        cont = cont-1;
    }
    printf("O valor de %i elevado a %i eh igual a %i.\n\n", base, n, total);
    system ("pause");
    return 0;
}