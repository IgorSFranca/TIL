/*Faça uma solução para guardar valores numéricos em uma matriz A
quadrada de tamanho N. Em seguida, guarde em B a matriz transposta de A*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int linha = 3, coluna = 3, matriz_orig[linha][coluna], matriz_transp[linha][coluna], i, j;
    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            printf("Informe o valor para a Linha %i e Coluna %i: ", i+1, j+1);
            scanf(" %i", &matriz_orig[linha][coluna]);
        }
    }
    for (i=linha-1; i>=0; i--){
        for (j=coluna-1; j>=0; j--){
            matriz_transp[linha][coluna] = matriz_orig[linha][coluna];
        }
    }
    printf("\nA matriz original eh a seguinte: ");
    for (i=0; i<linha; i++){
        printf("\n");
        for (j=0; j<coluna; j++){
            printf(" %i ", matriz_orig[linha][coluna]);
        }
    }
    printf("\nA matriz transposta fica da seguinte maneira:");
    for (i=0; i<linha; i++){
        printf("\n");
        for (j=0; j<coluna; j++){
            printf(" %i ", matriz_transp[linha][coluna]);
        }
    }
    printf("\n");
    system ("pause");
    return 0;
}