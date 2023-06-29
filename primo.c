#include <stdio.h>
#include <stdlib.h>

int main (){
    int num, i, soma = 0;
    printf("Informe um numero para saber se eh primo: ");
    scanf("%i", &num);
    for (i = 1; i <= num; i++){
        if (num % i == 0)
            soma++;
    }
    if (soma >= 3)
        printf("O numero nao eh primo.\n");
    else
        printf("O numero eh primo.\n");
    system ("pause");
    return 0;
}