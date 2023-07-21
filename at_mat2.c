/*Faça uma solução para guardar valores numéricos em uma matriz de
tamanho NxM
Em seguida, leia os elementos da matriz e imprima o menor e o maior
valor dessa matriz, bem como a respectiva posição onde se encontram tais
elementos*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
    int linha = 3, coluna = 3, matriz[linha][coluna], i, j, menor, maior, pos_maior[2] = {0}, pos_menor[2] = {0}, opcao;
    char resp = 's';

    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            printf("Insira um valor para a posicao Linha %i x Coluna %i: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            if (i==0 && j==0){
                maior = matriz[i][j];
                menor = matriz[i][j];
                pos_maior[0] = i;
                pos_maior[1] = j;
                pos_menor[0] = i;
                pos_menor[1] = j;
            }
            else if (matriz[i][j] > maior){
                maior = matriz[i][j];
                pos_maior[0] = i;
                pos_maior[1] = j;
            }
            else if (matriz[i][j] < menor){
                menor = matriz[i][j];
                pos_menor[0] = i;
                pos_menor[1] = j;
            }
        }
    }
    do{
    printf("\nOPCOES DE VISUALIZACAO\n");
    printf("[1] Visualizar a matriz.\n");
    printf("[2] Visualizar a posicao do menor valor.\n");
    printf("[3] Visualizar a posicao do maior valor.\n");
    printf("[4] Sair\n");
    printf("\n");
    printf("Informe sua opcao: ");
    scanf("%i", &opcao);
    switch (opcao){
        case 1: 
            printf("A matriz inserida foi: ");
            for (i=0; i<linha; i++){
                printf("\n");
                for (j=0; j<coluna; j++){
                    printf("%i ", matriz[i][j]);
                }

            }
            printf("\n");
            break;
        case 2:
            printf("A posicao do menor valor eh a seguinte: \n");
            printf("Linha: %i e ", pos_menor[0]+1);
            printf("Coluna: %i.", pos_menor[1]+1);
            printf("\n");
            break;
        case 3:
            printf("A posicao do maior valor eh a seguinte: \n");
            printf("Linha: %i e ", pos_maior[0]+1);
            printf("Coluna: %i.", pos_maior[1]+1);
            printf("\n");
            break;
        case 4: 
            resp = 'n';
            break;
    }
    } while (resp == 's');
    printf("Programa encerrado.");
    system ("pause");
    return 0;
}