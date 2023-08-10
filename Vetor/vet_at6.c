/*Adicionalmente ao exercício anterior, remova o elemento da estrutura,
fazendo a sobreposição de elementos */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
    int i, max = 5, vetor[max], num, totele = 0, posicao = -1;
    char resp = 's';
    
    //Recebendo os elementos
    for (i=0; i<max; i++){
        printf("Insira o %i elemento: ", i+1);
        scanf("%i", &vetor[i]);
        totele++;
        if (vetor[i] < max){
            printf("Deseja continuar inserindo valores? [s/n] ");
            scanf("%s", &resp);
            resp = tolower(resp);
            if (resp == 'n')
                break;
            }

    }

    //Mostrando os numeros do vetor antes de retirar o numero escolhido. 
    printf("\nForam informados %i valores.\n", totele);
    printf("E os numeros foram: ");
    for (i=0; i<totele; i++){
        printf("%i ", vetor[i]);
    }

    //Verificação dos números
    printf("\n\nInforme um numero a ser procurado e retirado: ");
    scanf("%i", &num);
    for (i=0; i<totele; i++){
        if (vetor[i] == num){
            posicao = i;
            printf("O numero %i foi encontrado na posicao %i.\n", num, posicao);
            break;
        }
        else if (vetor[i] >= max){
            printf("Numero nao encontrado.\n");
            break;
        }
    }

    //Retirando o numero escolhido do vetor
    if (posicao != -1){//Condição colocada executar somente se o valor procurado estiver dentro dos inseridos. Se não for, ele encerra o programa. 
        for (i=posicao; i<totele; i++)
            vetor[i] = vetor[i+1];
        totele--;
        printf("O elemento foi removido. \n");
    }

    //Mostrando os numeros do vetor depois de retirar o numero escolhido. 
    printf("O total de elementos atualizados sao %i.\n", totele);
    printf("\nOs numeros remanescentes foram: ");
    for (i=0; i<totele; i++){
        printf("%i ", vetor[i]);
    }
    system("pause");
    return 0;
}