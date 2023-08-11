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

//protótipos
void duplicar(int vetor[]);
void imprimir(int vetor[], int *);
void remover(int vetor[], int *posicao, int tam);
void criar(int vetor[], int *, int tam);
void cabecalho();
char opcao(char);

int main (){
    // declaração de variáveis
    char escolha;
    int tam = 10;
    int vetor[tam];
    int posicao = 0;

    //inicio
    criar(vetor, &posicao, tam);
    cabecalho();
    do{
        escolha = opcao(escolha);
        switch (escolha){
            case 'd': duplicar(vetor); imprimir(vetor, &posicao); break;
            case 'i': imprimir(vetor, &posicao); break;
            case 'r': remover(vetor, &posicao, tam); imprimir(vetor, &posicao); break;
            case 's': imprimir(vetor, &posicao); break;
        } 
    } while (escolha != 's');
    system ("pause");
    return 0;
}

//procedimentos e funções
void cabecalho (){
    printf("|-----------------------------------|\n");
    printf("|           ~#  OPCOES  #~          |\n");
    printf("| [D]uplicar os elementos do vetor  |\n");
    printf("| [I]mprimir os elementos do vetor  |\n");
    printf("| [R]emover um elemento do vetor    |\n");
    printf("| [S]air                            |\n");
    printf("|-----------------------------------|\n");
}

void duplicar(int vetor[]){
    int i; 
    for (i=0; i<10; i++)
        vetor[i] = 2*(vetor[i]);
}

void imprimir(int vetor[], int *posicao){
    int i;
    for (i=0; i<=*posicao; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");
}

void remover(int vetor[], int *posicao, int tam){
    printf("|------------------------------------------------|\n");
    printf("| Capacidade de armazenamento:    %i             |\n", tam);
    printf("| Armazenamento utilizado:        %i             |\n", *posicao+1);
    *posicao = *posicao-1;
    printf("|------------------------------------------------|\n");
    printf("|                      ~~~                       |\n");
    printf("| Exclusao do ultimo valor realizada com sucesso.|\n");
    printf("|                      ~~~                       |\n");
    printf("|------------------------------------------------|\n");
    printf("| Capacidade de armazenamento:    %i             |\n", tam);
    printf("| Armazenamento utilizado:        %i              |\n", *posicao+1);
    printf("|------------------------------------------------|\n");
}

void criar(int vetor[], int *posicao, int tam){
    int i;
    for (i=0; i<tam; i++){
        vetor[i] = i;
        *posicao = i;
    }
}

char opcao (char opcao){
    do{
        printf("\nInforme sua opcao: ");
        scanf(" %c", &opcao);
        opcao = tolower(opcao);
        if (opcao != 'd' && opcao != 'i' && opcao != 'r' && opcao != 's')
            printf("Opcao informada invalida. Informe novamente.\n");
    } while (opcao != 'd'  && opcao != 'i' && opcao != 'r' && opcao != 's');
    return opcao;
}