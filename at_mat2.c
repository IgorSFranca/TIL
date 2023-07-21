/*Faça uma solução para guardar valores numéricos em uma matriz de
tamanho NxM
Em seguida, leia os elementos da matriz e imprima o menor e o maior
valor dessa matriz, bem como a respectiva posição onde se encontram tais
elementos*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int matriz[3][3], i, j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Insira um valor para a posicao Linha %i x Coluna %i:", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    system ("pause");
    return 0;
}