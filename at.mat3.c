/*Faça uma solução para guardar valores numéricos em uma matriz A
quadrada de tamanho N. Em seguida, guarde em B a matriz transposta de A*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int linha = 3, coluna = 3, matriz_orig[linha][coluna], matriz_transp[linha][coluna], i, j;
    for (i=0; i<linha; i++){//Recebendo os valores para a matriz original
        for (j=0; j<coluna; j++){
            printf("Informe o valor para a Linha %i e Coluna %i: ", i+1, j+1);
            scanf(" %i", &matriz_orig[i][j]);
        }
    }
    for (i=0; i<linha; i++){//Transpondo os valores para a matriz transposta
        for (j=0; j<coluna; j++){
            matriz_transp[i][j] = matriz_orig[j][i];
        }
    }
    printf("\nA matriz original eh a seguinte: ");//Mostrando a matriz original
    for (i=0; i<linha; i++){
        printf("\n");
        for (j=0; j<coluna; j++){
            printf(" %i ", matriz_orig[i][j]);
        }
    }
    printf("\nA matriz transposta fica da seguinte maneira:");//Mostrando a matriz transposta
    for (i=0; i<linha; i++){
        printf("\n");
        for (j=0; j<coluna; j++){
            printf(" %i ", matriz_transp[i][j]);
        }
    }
    printf("\n");
    system ("pause");
    return 0;
}