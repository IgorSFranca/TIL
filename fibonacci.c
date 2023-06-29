#include <stdio.h>
#include <stdlib.h>

int main (){
    int termos, i, soma, n1 = 1, n2 = 1;
    printf("Informe quantos termos deseja imprimir da Sequencia de Fibonacci: ");
    scanf("%i", &termos);
    printf("Os termoms sao: 1 1 ");
    for (i = 1; i <= (termos-2); i++){
        soma = n1 + n2; 
        printf("%i ", soma);
        n1 = n2;
        n2 = soma;
    }
    system ("pause");
    return 0;
}