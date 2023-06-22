#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
    int x, cont = 1, guess;
    srand((unsigned)time(NULL));
    x = rand()%10;
    printf("===================================================\n");
    printf("                    LET'S GUESS                    \n");
    printf("===================================================\n\n");
    printf("Tente advinhar qual numero foi gerado, entre 0 e 9!\n");
    printf("Para isso, voce tera 3 tentativas.\n");
    printf("---------------------------------------------------\n\n");
    while (cont<=3){
        printf("Informe um numero: ");
        scanf("%i", &guess);
        if (guess == x){
            printf("Parabens. Voce acertou em %i tentativa(s).\n", cont);
            printf("O numero sorteado pela maquina foi %i.\n\n", x);
            break;
        }
        else if (guess != x && cont < 3){
            printf("Infelizmente voce nao acertou.\n");
            printf("Voce tem mais %i tentativa (s).\n", (3-cont));
            if (x > guess){
                printf("O numero da maquina eh maior do que o informado.\n\n");
            }
            else{
                printf("O numero da maquina eh menor do que o informado.\n\n");
            }
        }
        else if (guess != x && cont == 3){
            printf("Infelizmente voce nao acertou e voce nao tem mais tentativas.\n");
            printf("O numero sorteado pela maquina foi %i.\n\n", x);
            break;
        }
    cont ++;
    }
    system ("pause");
    return 0;
}