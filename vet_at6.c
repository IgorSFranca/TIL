/*Adicionalmente ao exercício anterior, remova o elemento da estrutura,
fazendo a sobreposição de elementos */

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, max = 5, vetor[max], num;

    for (i=0; i<max; i++){//Recebendo os elementos
        printf("Insira o %i elemento: ", i+1);
        scanf("%i", &vetor[i]);
    }
    printf("\nOs numeros informados no vetor foram: ");
    for (i=0; i<max; i++){//Mostrando os numeros do vetor antes de retirar o numero escolhido. 
        printf("%i ", vetor[i]);
    }
    printf("\nInforme um numero a ser procurado e retirado: ");
    scanf("%i", &num);
    for (i=0; i<max; i++){//Verificação dos números
        if (vetor[i] == num){
            printf("O numero %i foi encontrado na posicao %i.\n", num, vetor[i]);
            break;
        }
        else if (vetor[i] >= max){
            printf("Numero nao encontrado.\n");
            break;
        }
    }


    system("pause");
    return 0;
}