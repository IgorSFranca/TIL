/*Inicialize com ‘\0’ um vetor de caracteres de 10 posições. Insira
caracteres no mesmo e, em seguida, imprima seus elementos apenas se
valor for vogal*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (){
    char vetor[10] = {'\0'};
    int i;
    for (i=0; i<10; i++){//Recebendo os caracteres
        printf("Insira o %i caracter: ", i+1);
        scanf(" %c", &vetor[i]);
        vetor[i] = tolower(vetor[i]);
    }
    printf("-------------------------------\n")
    for (i=0; i<10; i++){//Escrevendo as vogais digitadas
        if (vetor[i] == 'a'||vetor[i] == 'e'||vetor[i] == 'i'||vetor[i] == 'o'||vetor[i] == 'u'){
            printf("A letra: ");
            printf("%c", vetor[i]);
            printf(" foi digitada.\n");
        }
    }
    system ("pause");
    return 0;
}