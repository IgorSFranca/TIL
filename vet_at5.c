/*Insira elementos em um vetor de inteiros e peça ao usuário informar um
número a ser procurado nessa estrutura. Se encontrar, mostre o número e
o índice onde o mesmo se encontra*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, max = 5, vetor[max], num;

    for (i=0; i<max; i++){//Recebendo os elementos
        printf("Insira o %i elemento: ", i+1);
        scanf("%i", &vetor[i]);
    }
    printf("Informe um numero a ser procurado: ");
    scanf("%i", &num);
    for (i=0; i<max; i++){
        if (vetor[i] == num){
            printf("O numero %i foi encontrado na posicao %i.\n", num, vetor[i]);
            break;
        }
    }
    system ("pause");
    return 0;
}