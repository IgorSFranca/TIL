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
Encerra o programa*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int opcao;
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
        switch (opcao)
            case 1:
            case 2:
            case 3:
            case 4:
            default: 
                printf("Opcao nao encontrada.\n");

    } while (opcao == 5);
    system ("pause");
    return 0;
}