/*SOLICITAÇÃO: 
Faça uma solução para o usuário informar dois números do tipo
float e mostrar o resultado de todas as operações aritméticas sobre eles.

1) Procedimento sem passagem de parâmetros
2) Procedimento com passagem de parâmetros
3) Funções sem passagem de parâmetros
4) Funções com passagem de parâmetros

PROCEDIMENTO SEM PASSAGEM DE PARÂMETROS

#include <stdio.h>

void somar(), subtrair(), multiplicar(), dividir();

int main (){
    somar();
    subtrair();
    multiplicar();
    dividir();
    return 0;
}

void somar(){
    float n1 = 2, n2 = 5;
    printf("%.2f + %.2f = %.2f\n", n1, n2, (n1+n2));
}

void subtrair(){
    float n1 = 2, n2 = 5;
    printf("%.2f - %.2f = %.2f\n", n1, n2, (n1-n2));
}

void multiplicar(){
    float n1 = 2, n2 = 5;
    printf("%.2f * %.2f = %.2f\n", n1, n2, (n1*n2));
}

void dividir(){
    float n1 = 2, n2 = 5;
    printf("%.2f / %.2f = %.2f\n", n1, n2, (n1/n2));
}

PROCEDIMENTO COM PASSAGEM DE PARÂMETROS*/

#include <stdio.h>

void somar(float, float);

int main (){
    float n1 = 2, n2 = 5;
    somar(n1, n2);
    return 0;
}

void somar (float x, float y){
    printf("%.2f + %.2f = %.2f\n", x, y, (x+y));
}
