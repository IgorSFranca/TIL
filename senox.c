#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float soma = 0, fat = 0, g_rad;
    int x, i, j;
    printf("Escreva o valor do angulo em graus: ");
    scanf("%i", &x);//recebendo o angulo em graus
    g_rad = (x*3.14)/180;
    for (i=3; i<=19; i+=2){
        for (j=1; j<=i; j++){
            fat = fat*j;
        }
        soma = soma + ((pow(g_rad, i))/fat);
        fat = 1;
    }
    printf("SenX = %.2f\n", g_rad);
    system ("pause");
    return 0;
}