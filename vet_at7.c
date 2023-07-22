/*Faça uma solução para exibir um menu ao usuário, enquanto a opção for
diferente de “sair”
As opções devem incluir as operações: inserir, pesquisar, excluir, imprimir e sair
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
-Não inserir mais de 5 itens (Feito)
-Não pesquisar, se vetor é vazio
-Não excluir, se vetor é vazio
-Não imprimir, se vetor é vazio
-Antes de excluir, pesquisar o item
Implemente e teste cada funcionalidade
antes de implementar as demais*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao, max = 5, vetor[max], total_elementos = 0;
    do {
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
            case 1:
                if (total_elementos < max){
                    printf("Informe o valor: ");
                    scanf(" %i", &vetor[total_elementos]);
                    total_elementos++;
                }
                else
                    printf("Nao ha espaco para arquivamento.\n");
            case 2:
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