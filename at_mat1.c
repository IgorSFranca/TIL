/*Faça uma solução para inicializar uma matriz quadrada de tamanho 3,
automaticamente, tal que o elemento da posição (i,j) seja 2*i+j. Em
seguida, o usuário poderá escolher uma das seguintes operações:

A) imprimir todos os elementos da matriz
B) somar os elementos de cada linha e mostrar o resultado
C) somar os elementos de cada coluna e mostrar o resultado
D) imprimir os elementos da diagonal principal
E) imprimir todos os elementos, exceto os da diagonal principal
F) imprimir os elementos, tal que a linha é par e a coluna é ímpar
G) imprimir os elementos da coluna 0, apenas

Use a estrutura switch-case para a seleção da opção*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void cabecalho(), linha(), opcoes(), escrever_matriz(int matriz[3][3]), imprimir_matriz(int matriz[3][3]), somar_linha(int matriz[3][3]), somar_coluna(int matriz[3][3]);
void imprimir_diagonal_principal(int matriz[3][3]);

int main (){
    int i, j, matriz[3][3], soma; 
    char opcao;

    escrever_matriz(matriz);
    cabecalho();
    do{
        opcoes();
        printf("Digite sua escolha: ");
        scanf("%s", &opcao);
        opcao = tolower(opcao);
        switch (opcao){
            case 'a':
                linha();
                printf("Opcao escolhida: imprimir todos os elementos da matriz.");
                imprimir_matriz(matriz);
                linha();
                break;
            case 'b':
                linha();
                printf("Opcao escolhida: somar os elementos de cada linha e mostrar o resultado.\n");
                somar_linha(matriz);
                linha();
                break;
            case 'c':
                linha();
                printf("Opcao escolhida: somar os elementos de cada coluna e mostrar o resultado\n");
                somar_coluna(matriz);
                linha();
                break;
            case 'd':
                linha();
                printf("Opcao escolhida: imprimir os elementos da diagonal principal\n");
                imprimir_diagonal_princial(matriz);
                linha();
                break;
            case 'e':
                linha();
                printf("Opcao escolhida: imprimir todos os elementos, exceto os da diagonal principal\n");
                for (i=0; i<3; i++){
                    printf("\n");
                    for (j=0; j<3; j++){
                        if (i != j)
                            printf("%i ", matriz[i][j]);
                    }
                }
                linha();
                break;
            case 'f':
                linha();
                printf("Opcao escolhida: imprimir os elementos, tal que a linha eh par e a coluna eh impar\n");
                for (i=0; i<3; i++){
                    printf("\n");
                    for (j=0; j<3; j++){
                        if (i%2 == 0 && j%2 == 0)
                            printf("%i ", matriz[i][j]);
                        else
                            printf("x ");
                    }
                }
                linha();
                break;   
            case 'g':
                linha();
                printf("Opcao escolhida: imprimir os elementos da coluna 0, apenas\n");
                for (i=0; i<3; i++){
                    for (j=0; j<3; j++){
                        if (j==0)
                            printf("%i ", matriz[i][j]);
                    }
                }
                linha();
                break;
            case 'h':
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao nao encontrada.\n");
                break;
        }
    }while (opcao!='h');
    printf("\n");
    return 0; 
}

void cabecalho(){
    printf("\n--------------------------------------------------------------------\n");
    printf("                                 ~#~                                  \n");
    printf("                      MANIPULACAO DE MATRIZES                         \n");
    printf("                                 ~#~                                  \n");
    printf("--------------------------------------------------------------------\n");
}

void linha(){
    printf("\n--------------------------------------------------------------------\n");
}

void opcoes(){
    printf("\nEscolha uma das opcoes abaixo: \n");
    printf("[a] imprimir todos os elementos da matriz.\n");
    printf("[b] somar os elementos de cada linha e mostrar o resultado\n");
    printf("[c] somar os elementos de cada coluna e mostrar o resultado\n");
    printf("[d] imprimir os elementos da diagonal principal\n");
    printf("[e] imprimir todos os elementos, exceto os da diagonal principal\n");
    printf("[f] imprimir os elementos, tal que a linha eh par e a coluna eh impar\n");
    printf("[g] imprimir os elementos da coluna 0, apenas\n");
    printf("[h] para encerrar.\n");
}

void escrever_matriz(int matriz[3][3]){
    int i, j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            matriz[i][j] = 2*i+j;
            }
        }
}

void imprimir_matriz(int matriz[3][3]){
    int i, j;
    for (i=0; i<3; i++){
        printf("\n");
        for (j=0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
    }
}

void somar_linha(int matriz[3][3]){
    int i, j, soma;
        for (i=0; i<3; i++){
        soma = 0;
        for (j=0; j<3; j++){
            soma = soma+matriz[i][j];
        }
        printf("A soma da linha %i eh: %i.\n", i+1, soma);
    }
}

void somar_coluna(int matriz[3][3]){
    int i, j, soma;
    for (i=0; i<3; i++){
        soma = 0;
        for (j=0; j<3; j++){
            soma = soma+matriz[j][i];
        }
        printf("A soma da coluna %i eh: %i\n", i+1, soma);
    }
}

void imprimir_diagonal_princial(int matriz[3][3]){
    int i, j;
    for (i=0; i<3; i++)
    printf("%i ", matriz[i][i]);
}