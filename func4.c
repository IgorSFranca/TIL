/*Crie uma função em C que recebe um array de inteiros e seu tamanho como parâmetros, e retorna o maior elemento do array.*/

#include <stdio.h>
#include <stdlib.h>

void MaiorElemento (int array[], int tam){
    int i, maior = array[0];
    for (i=1; i<= tam; i++){
        if (array[i] > maior)
            maior = array[i];
    }
    printf("O maior elemento eh o %i.\n", maior);
}

int main (){
    int numeros[] = {2, 4, 6, 8, 9};
    int tam = sizeof(numeros)/sizeof(numeros[0]);
    MaiorElemento (numeros, tam);
    system ("pause");
    return 0;
}