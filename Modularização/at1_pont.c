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

void duplicar(int vetor[10]), imprimir(int vetor[10]), remover(), criar(int vetor[10]), cabecalho();
char opcao(char);

int main (){
    char escolha;
    int vetor[10];
    criar(vetor);

    cabecalho();
    do{
        escolha = opcao(escolha);
        switch (escolha){
            case 'd': duplicar(vetor); imprimir(vetor); break;
            case 'i': imprimir(vetor); break;
            case 'r': break;
            case 's': break;
        } 
    } while (escolha != 's');
    system ("pause");
    return 0;
}

void cabecalho (){
    printf("-------------------------------------\n");
    printf("|           ~#  OPCOES  #~          |\n");
    printf("| [D]uplicar os elementos do vetor  |\n");
    printf("| [I]mprimir os elementos do vetor  |\n");
    printf("| [R]emover um elemento do vetor    |\n");
    printf("| [C]riar um vetor de 4 posicoes    |\n");
    printf("| [S]air                            |\n");
    printf("-------------------------------------\n");
}

void duplicar(int vetor[]){
    int i; 
    for (i=0; i<10; i++)
        vetor[i] = 2*(vetor[i]);
}

void imprimir(int vetor[10]){
    int i;
    for (i=0; i<10; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");
}

void remover(){}

void criar(int vetor[10]){
    int i;
    for (i=0; i<10; i++){
        vetor[i] = i;
    }
}

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