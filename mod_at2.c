/*Operações sobre vetor. Declare, na região global, um vetor de inteiros de
5 posições.
O usuário deve informar uma das seguintes opções:
1. Inserir 
2. Imprimir 
3. Sair.
Exiba este menu enquanto a opção for diferente de 3.
Ambas opções, 2 e 3, devem imprimir os elementos do vetor.
Faça uso de laço do-while e de switch-case.*/

#include <stdio.h>
#include <stdlib.h>

int numeros[5];

void inserir(), imprimir();

int main (){
    int escolha;
    do{
        printf("[1] Inserir\n");
        printf("[2] Imprimir\n");
        printf("[3] Sair\n");
        printf("Escolha a opcao desejada: ");
        scanf("%i", &escolha);
        switch(escolha){
            case 1: inserir(); break;
            case 2: imprimir(); break;
            case 3: imprimir(); break;
        }
    } while (escolha != 3);
    system ("pause");
    return 0;
}

void inserir(){
    int i; 
    for (i=0; i<5; i++){
        printf("Informe o %i valor: ", i+1);
        scanf("%i", &numeros[i]);
    }
}

void imprimir(){
    int i;
    printf("O Vetor inteiro: ");
    for (i=0; i<5; i++){
        printf("%i ", numeros[i]);
    }
    printf("\n");
}