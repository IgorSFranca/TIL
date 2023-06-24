#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char profissao[30];
    int cont = 0, resp = 0;
    printf("=========================================\n");
    printf("              BUSCA DENTISTA             \n");
    printf("=========================================\n\n");
    do{
        printf("Informe a profissao: ");
        scanf("%s", profissao);
        if (strcmp(profissao, "DENTISTA") == 0||strcmp(profissao, "Dentista") == 0||strcmp(profissao, "dentista") == 0)
            cont++;
        printf("Continuar inserindo? [1=Sim/2=Nao]: ");
        scanf("%i", &resp);
    } while (resp == 1);
    printf("Foram informados %i dentistas.\n\n", cont);
    system ("pause");
    return 0;
}