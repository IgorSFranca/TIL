/*Inicialize dois vetores de inteiros de mesmo tamanho. Some o conteúdo
dos dois vetores e armazene o resultado em um terceiro vetor, na
respectiva posição. Imprima os elementos do terceiro vetor*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, vet1[5], vet2[5], vet3[5];
    for (i=0; i<5; i++){//Recebendo os valores
        printf("Insira o %i valor do 1 vetor: ", i+1);
        scanf("%i", &vet1[i]);
        printf("Insira o %i valor do 2 vetor: ", i+1);
        scanf("%i", &vet2[i]);
    }
    for (i=0; i<5; i++){//For para somar os valores
        vet3[i] = vet1[i]+vet2[i];
    }
    printf("------------------------------\n");
    for (i=0; i<5; i++){//Mostrando a soma
        printf("A soma da posicao %i: %i\n", i+1, vet3[i]);
    }
    system ("pause");
    return 0;
}