#include <stdio.h>
#include <stdlib.h>

void funcao_p(), funcao_i();

int main (){
    int matriz[3][3];
    funcao_p(matriz);
    funcao_i(matriz);
    system ("pause");
    return 0;
}

void funcao_p(int matriz[3][3]){
    int i, j;
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%i", &matriz[i][j]);
        }
    }    
}

void funcao_i(int matriz[3][3]){
    int i, j;
    for (i=0; i<3; i++){
        printf("\n");
        for (j=0; j<3; j++){
           printf("%i", &matriz[i][j]);
        }
    }  
}