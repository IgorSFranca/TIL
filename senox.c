#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float soma = 0, fat = 1, g_rad, pi = 3.14;
    int x, i, j;
    printf("Escreva o valor do angulo em graus: ");
    scanf("%i", &x);//recebendo o angulo em graus
    g_rad = (x*pi)/180;//convertendo o angulo para radianos
    for (i=3; i<=19; i+=2){
        for (j=1; j<=i; j++){
            fat = fat*j;//calculando o fatorial de i
        }
        soma = soma + ((pow(g_rad, i))/fat);
        fat = 1;//resetando o valor do fatorial para a proxima iteração
    }
    printf("SenX = %.2f\n", g_rad);
    system ("pause");
    return 0;
}