/*Faça uma solução para receber três números, por passagem de
parâmetro, tal que o módulo possibilite imprimir na main() tais valores em
ordem crescente de valor. Utilize apenas variáveis locais
*/

#include <stdio.h>
#include <stdlib.h>

//Protótipos
void organizar(int *, int *, int *);
void preencher(int *, int *, int *);

int main (){
    //Declaração de variáveis
    int n1, n2, n3;

    preencher(&n1, &n2, &n3);
    organizar (&n1, &n2, &n3);
    printf("Os numeros inseridos em ordem: ");
    printf("%i, ", n1);
    printf("%i ", n2);
    printf("e %i.", n3);
    printf("\n");
    system ("pause");
    return 0;
}

//Procedimentos e funções
void organizar(int *n1, int *n2, int *n3){
    //n1 = 2
    //n2 = 1
    //n3 = 3
    int nx;
    if (*n1 > *n2){
        nx = *n1;
        *n1 = *n2;
        *n2 = nx;
    }
    if (*n2 > *n3){
        nx = *n2;
        *n2 = *n3;
        *n3 = nx;
    }
    if (*n1 > *n2){
        nx = *n1;
        *n1 = *n2;
        *n2 = nx;
    }
}

void preencher(int *n1, int *n2, int *n3){
    printf("Informe n1: ");
    scanf("%i", &*n1);
    printf("Informe n2: ");
    scanf("%i", &*n2);
    printf("Informe n3: ");
    scanf("%i", &*n3);
}