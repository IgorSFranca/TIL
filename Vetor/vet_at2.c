/*Faça uma solução para ler 10 valores inteiros. Em seguida, imprima-os na
ordem inversa (o último elemento deverá ser o primeiro a ser impresso)*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, num[10];
    for (i=0; i<10; i++){
        printf("Informe um valor o %i num inteiro: ", i+1);
        scanf("%i", &num[i]);
    }
    printf("A impressao inversa fica: \n");
    for (i=9; i>=0; i--){
        printf("%i valor: %i\n", i+1, num[i]);
    }
    system ("pause");
    return 0;
}