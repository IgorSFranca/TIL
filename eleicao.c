#include <stdio.h>
#include <stdlib.h>

int main (){
    int cand_1=0, cand_2=0, cand_3=0, cand_4=0, nulo=0, branco=0, voto, continuar;
    printf("=========================\n");
    printf("   APURACAO DA ELEICAO   \n");
    printf("=========================\n\n");
    printf("Candidatos:\n");
    printf("[1] Candidato A\n");
    printf("[2] Candidado B\n");
    printf("[3] Candidado C\n");
    printf("[4] Candidado D\n");
    printf("[5] Voto Nulo\n");
    printf("[6] Voto em Branco\n");
    printf("[0] Finalizar votacao\n");
    printf("=========================\n\n");
    do {
        printf("Codigo do candidato: ");
        scanf("%i", &voto);
        switch (voto){
            case 1:
                printf("Voto confirmado no Candidado A.\n");
                cand_1++;
                break;
            case 2:
                printf("Voto confirmado no Candidado B.\n");
                cand_2++;
                break;
            case 3:
                printf("Voto confirmado no Candidado C.\n");
                cand_3++;
                break;
            case 4:
                printf("Voto confirmado no Candidado D.\n");
                cand_4++;
                break;
            case 5:
                printf("Voto Nulo confirmado.\n");
                nulo++;
                break;
            case 6:
                printf("Voto em Branco confirmado.\n");
                branco++;
                break;
        }
        printf("Deseja computar outro voto? [1=Sim/2=Nao]: ");
        scanf("%i", &continuar);
        if (continuar == 2)
            break;
    } while (voto != 0);
    printf("=========================\n");
    printf("         RESUMO\n");
    printf("=========================\n");
    printf("Candidato 1: %i votos.\n", cand_1);
    printf("Candidato 2: %i votos.\n", cand_2);
    printf("Candidato 3: %i votos.\n", cand_3);
    printf("Candidato 4: %i votos.\n", cand_4);
    printf("Nulos      : %i votos.\n", nulo);
    printf("Brancos    : %i votos.\n", branco);
    printf("=========================\n");
    system ("pause");
    return 0;
}