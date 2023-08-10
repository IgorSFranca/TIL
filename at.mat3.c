/*Faça uma solução para guardar valores numéricos em uma matriz A
quadrada de tamanho N. Em seguida, guarde em B a matriz transposta de A*/

#include <stdio.h>
#include <stdlib.h>

void criar_matriz(int matriz[3][3]), visualizar_original(int matriz[3][3]), transpor_matriz(int matriz[3][3], int matriz_transp[3][3]), visualizar_transposta(int matriz[3][3]);

int main (){
    int linha = 3, coluna = 3, matriz_orig[linha][coluna], matriz_transp[linha][coluna], i, j;
    criar_matriz(matriz_orig);
    transpor_matriz(matriz_orig, matriz_transp);
    visualizar_original(matriz_orig);
    visualizar_transposta(matriz_transp);
    printf("\n");
    system ("pause");
    return 0;
}

void criar_matriz(int matriz_orig[3][3]){
    int i, linha = 3, j, coluna = 3;
    for (i=0; i<linha; i++){//Recebendo os valores para a matriz original
        for (j=0; j<coluna; j++){
            printf("Informe o valor para a Linha %i e Coluna %i: ", i+1, j+1);
            scanf(" %i", &matriz_orig[i][j]);
        }
    }
} 

void visualizar_original(int matriz_orig[3][3]){
    int i, linha = 3, j, coluna = 3;
    printf("\nA matriz original eh a seguinte: ");//Mostrando a matriz original
    for (i=0; i<linha; i++){
        printf("\n");
        for (j=0; j<coluna; j++){
            printf(" %i ", matriz_orig[i][j]);
        }
    }
} 

void transpor_matriz(int matriz_orig[3][3], int matriz_transp[3][3]){
    int i, linha = 3, j, coluna = 3;
    for (i=0; i<linha; i++){//Transpondo os valores para a matriz transposta
        for (j=0; j<coluna; j++){
            matriz_transp[i][j] = matriz_orig[j][i];
        }
    }
} 

void visualizar_transposta(int matriz_transp[3][3]){
    int i, linha = 3, j, coluna = 3;
    printf("\nA matriz transposta fica da seguinte maneira:");//Mostrando a matriz transposta
    for (i=0; i<linha; i++){
        printf("\n");
        for (j=0; j<coluna; j++){
            printf(" %i ", matriz_transp[i][j]);
        }
    }
}