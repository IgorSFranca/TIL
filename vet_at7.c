/*
 * Nome do arquivo: vet_at7.c
 * Descrição: Atividade 7 da aula de Vetores em linguagem C.
        * Faça uma solução para exibir um menu ao usuário, enquanto a opção for diferente de “sair”
        As opções devem incluir as operações: inserir, pesquisar, excluir, imprimir e sair.
       
        1) Inserir
            Insere um inteiro em um vetor de 5 posições
        2) Pesquisar
            Pesquisa um elemento no vetor
        3) Excluir
            Remove um elemento do vetor
        4) Imprimir
            Mostra todos os elementos do vetor
        5) Sair
            Encerra o programa

        A solução deve ser consistente:
        - Não inserir mais de 5 itens
        - Não pesquisar, se vetor é vazio
        - Não excluir, se vetor é vazio
        - Não imprimir, se vetor é vazio
        - Antes de excluir, pesquisar o item
        Implemente e teste cada funcionalidade antes de implementar as demais.

 * Autor: Igor França
 * Data de criação: 22 de julho de 2023
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao, max = 5, vetor[max], total_elementos = 0, valor_procurado, i, posicao_valor_procurado = -1;
    do {//Laço de repetição para executar até o usuário digital a opção 5
        printf("-------------------------\n");
        printf(" MANIPULACAO DE VETORES \n");
        printf("-------------------------\n");
        printf("[1] Inserir valor\n");
        printf("[2] Pesquisar valor\n");
        printf("[3] Excluir valor\n");
        printf("[4] Imprimir valor\n");
        printf("[5] Sair\n");
        printf("-------------------------\n");
        printf("Informe a opcao: ");
        scanf("%i", &opcao);
        switch (opcao){
            case 1://Opção de inserção de valores no vetor
                if (total_elementos < max){//Verificação se há espaço de armazenamento
                    printf("Informe o valor: ");
                    scanf(" %i", &vetor[total_elementos]);//Recebe o valor
                    total_elementos++;//Controla a quantidade de elementos do vetor
                    break;
                }
                else//Resposta para quando não há espaço de armazenamento
                    printf("Nao ha espaco para arquivamento.\n");
                    break;
            case 2://Opção para procurar um valor no vetor
                printf("Informe o valor a ser procurado: ");
                scanf(" %i", &valor_procurado);//Recebe o valor procurado
                if (total_elementos == -1){//Condição para fazer a busca somente se tiver valores arquivados no vetor
                    for (i=0; i<max; i++){//Iteração para varrer o vetor procurando o valor
                        if (valor_procurado == vetor[i]){//Condição para achar o valor
                            posicao_valor_procurado = i;//Salva a posição que o valor está armazenado 
                            break;
                        }
                    }
                    if (posicao_valor_procurado != -1)//Resposta para quanto achar o valor no vetor
                        printf("Valor %i encontrado na posicao %i.\n", valor_procurado, posicao_valor_procurado);
                    else//Resposta para quanto não achar o valor no vetor
                        printf("Valor %i procurado nao encontrado.\n", valor_procurado);
                }
                else//resposta caso não haja valores salvos no vetor
                    printf("Nao ha valores salvos no vetor.\n");
            case 3:
            case 4:
            case 5: break;
            default: 
                printf("Opcao nao encontrada.\n");
                break;
        }
    } while (opcao != 5);
    system ("pause");
    return 0;
}