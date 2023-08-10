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
        5) Limpar Visor
            Limpa a tela para melhor visualização das opções
        6) Sair
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

#include <stdio.h>//biblioteca padrão
#include <stdlib.h>//biblioteca padrão

void cabecalho(){
    printf("----------------------------------------\n");
    printf("         MANIPULACAO DE VETORES\n");
    printf("----------------------------------------\n");
    printf("[1] Inserir valor\n");
    printf("[2] Pesquisar valor\n");
    printf("[3] Excluir valor\n");
    printf("[4] Imprimir valores do vetor\n");
    printf("[5] Limpeza do monitor\n");
    printf("[6] Sair\n");
    printf("----------------------------------------\n");
}

void imprimir_vetor(int vetor[], int total_elementos){//Função para imprimir os valores atuais do vetor
    int i;
    if (total_elementos != 0){//Validação para saber se há valores no vetor
        printf("Valores atuais do Vetor: ");
        for (i=0; i<total_elementos; i++){//Iteração para imprimir cada valor
            printf("%i ", vetor[i]);
         }
    }
    else//Resposta para se não houver valores no vetor
    printf("- O vetor nao possui valores armazenados.\n");
    printf("\n");
}

int main (){
    int opcao, max = 5, vetor[max], total_elementos = 0, valor_procurado, i, posicao_valor_procurado = -1;
    do {//Laço de repetição para executar até o usuário digital a opção 5
        cabecalho();
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
                if (total_elementos != 0){//Condição para fazer a busca somente se tiver valores arquivados no vetor
                printf("Informe o valor a ser procurado: ");
                scanf(" %i", &valor_procurado);//Recebe o valor procurado
                    for (i=0; i<total_elementos; i++){//Iteração para varrer o vetor procurando o valor
                        if (valor_procurado == vetor[i]){//Condição para achar o valor
                            posicao_valor_procurado = i;//Salva a posição que o valor está armazenado 
                            break;
                        }
                    }
                    if (posicao_valor_procurado != -1){//Resposta para quanto achar o valor no vetor
                        printf("Valor %i encontrado na posicao %i.\n", valor_procurado, posicao_valor_procurado);
                        posicao_valor_procurado = -1;
                        break;
                    }
                    else {//Resposta para quanto não achar o valor no vetor
                        printf("Valor %i procurado nao encontrado.\n", valor_procurado);
                        break;
                    }

                }
                else//resposta caso não haja valores salvos no vetor
                    printf("Nao ha valores salvos no vetor.\n");
                    break;
            case 3://Opção para excluir valor
                if (total_elementos != 0){//Verificação se há valores armazenados no vetor
                    imprimir_vetor(vetor, total_elementos);//Imprimindo o vetor antes de excluir o elemento
                    printf("Informe qual valor deseja excluir: ");
                    scanf(" %i", &valor_procurado);//Recebendo o valor a ser excluído
                    for (i=0; i<total_elementos; i++){//Iteração para varrer o vetor procurando o valor
                        if (valor_procurado == vetor[i]){//Condição para achar o valor
                            posicao_valor_procurado = i;//Salva a posição que o valor está armazenado 
                        }
                    }
                    for (i=posicao_valor_procurado; i<=total_elementos; i++){//Iteração começando do valor que deseja excluir até o final do vetor
                        vetor[i] = vetor[i+1];//Substituição do valor para o valor subsequente
                        }
                    total_elementos--;//Diminuição da quantidade de elementos salvos (controle de elementos)
                }
                imprimir_vetor(vetor, total_elementos);//imprimindo o vetor após a exclusão
                break;
            case 4:
                imprimir_vetor(vetor, total_elementos);
                break;
            case 5: 
                system("cls");
                break;
            case 6: break;
            default: 
                printf("Opcao nao encontrada.\n");
                break;
        }
    } while (opcao != 6);
    system ("pause");
    return 0;
}