/*Adicionalmente ao exercício anterior, remova o elemento da estrutura,
fazendo a sobreposição de elementos */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
    int i, max = 5, vetor[max], num, totele = 0;
    char resp = 's';
    
    //Recebendo os elementos
    for (i=0; i<max; i++){
        printf("Insira o %i elemento: ", i+1);
        scanf("%i", &vetor[i]);
        printf("Deseja continuar inserindo valores? [s/n] ");
        scanf("%s", &resp);
        resp = tolower(resp);
        if (resp == 'n')
            break;
        totele++;
    }

    //Mostrando os numeros do vetor antes de retirar o numero escolhido. 
    printf("\nOs numeros informados no vetor foram: ");
    for (i=0; i<=totele; i++){
        printf("%i ", vetor[i]);
    }

    //Verificação dos números
    printf("\n\nInforme um numero a ser procurado e retirado: ");
    scanf("%i", &num);
    for (i=0; i<max; i++){
        if (vetor[i] == num){
            printf("O numero %i foi encontrado na posicao %i.\n", num, vetor[i]);
            break;
        }
        else if (vetor[i] >= max){
            printf("Numero nao encontrado.\n");
            break;
        }
    }

    //Retirando o numero escolhido do vetor
    for (i=0; i<max; i++){
        if (vetor[i] == num)
            if (vetor[i] == max)
                vetor[i] = 0;
            else
                vetor[i] = vetor[i]+1;
        else if (vetor[i] > num && vetor[i] != max)
            vetor[i] = vetor[i]+1;
        else if (vetor[i] > num && vetor[i] == max)
            vetor[i] = 0;
    }

    //Mostrando os numeros do vetor depois de retirar o numero escolhido. 
    printf("\nOs numeros remanescentes foram: ");
    for (i=0; i<max; i++){
        printf("%i ", vetor[i]);
    }

    system("pause");
    return 0;
}