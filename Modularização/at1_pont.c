/*Faça uma solução, usando modularidade, para o sistema armazenar 10 inteiros
em um vetor. O usuário poderá escolher, dentre as opções:
[D]uplicar:
Todos os elementos do vetor são duplicados. Imprima-os, em seguida
[I]mprimir:
Todos os elementos do vetor são impressos
[R]emover:
O último elemento do vetor deve ser removido. Imprima-os, em seguida
[S]air
Todos os elementos do vetor são impressos e o sistema é encerrado

Obs.: Todo vetor é passado por referência. Logo, qualquer modificação nesta
estrutura dentro de um módulo não requer o seu retorno.
Para esta tarefa, declare o vetor na função main()
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void duplicar(), imprimir(), remover(), criar(), cabecalho();
char opcao(char);

int main (){
    char escolha;

    cabecalho();
    escolha = opcao(escolha);

    switch (escolha){
        case 'd': break;
        case 'i': break;
        case 'r': break;
        case 's': break;
    } 
    system ("pause");
    return 0;
}

void cabecalho (){
    printf("-------------------------------------\n");
    printf("|           ~#  OPCOES  #~          |\n");
    printf("| [D]uplicar os elementos do vetor  |\n");
    printf("| [I]mprimir os elementos do vetor  |\n");
    printf("| [R]emover um elemento do vetor    |\n");
    printf("| [S]air                            |\n");
    printf("-------------------------------------\n");
}

void duplicar(){}
void imprimir(){}
void remover(){}
void criar(){}

char opcao (char opcao){
    do{
        printf("Informe sua opcao: ");
        scanf(" %c", &opcao);
        opcao = tolower(opcao);
        if (opcao != 'd' && opcao != 'i' && opcao != 'r' && opcao != 's')
            printf("Opcao informada invalida. Informe novamente.\n");
    } while (opcao != 'd'  && opcao != 'i' && opcao != 'r' && opcao != 's');
    return opcao;
}