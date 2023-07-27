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
    system ("pause");
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

PROCEDIMENTO COM PASSAGEM DE PARÂMETROS

#include <stdio.h>

void somar(float, float), subtrair(float, float), multiplicar(float, float), dividir(float, float);

int main (){
    float n1 = 2, n2 = 5;
    somar(n1, n2);
    subtrair(n1, n2);
    multiplicar(n1, n2);
    dividir(n1, n2);
    system ("pause");
    return 0;
}

void somar (float x, float y){
    printf("%.2f + %.2f = %.2f\n", x, y, (x+y));
}

void subtrair (float x, float y){
    printf("%.2f - %.2f = %.2f\n", x, y, (x-y));
}

void multiplicar (float x, float y){
    printf("%.2f * %.2f = %.2f\n", x, y, (x*y));
}

void dividir (float x, float y){
    printf("%.2f / %.2f = %.2f\n", x, y, (x/y));
}

FUNÇÃO SEM PASSAGEM DE PARÂMETROS

#include <stdio.h>
#include <stdlib.h>

float somar(), subtrair(), multiplicar(), dividir();

int main (){
    float so, su, mu, di;
    so = somar();
    su = subtrair();
    mu = multiplicar();
    di = dividir();
    printf("Soma: %.2f\n", so);
    printf("Subtracao: %.2f\n", su);
    printf("Multiplicacao: %.2f\n", mu);
    printf("Divisao: %.2f\n", di);

    system("pause");
    return 0;
}

float somar (){
    float n1 = 2, n2 = 5;
    return n1+n2;
}

float subtrair(){
    float n1 = 2, n2 = 5;
    return n1 - n2;
}

float multiplicar(){
    float n1 = 2, n2 = 5;
    return n1*n2;
}

float dividir(){
    float n1 = 2, n2 = 5;
    return n1/n2;
}

FUNÇÃO COM PASSAGEM DE PARÂMETROS*/

#include <stdio.h>
#include <stdlib.h>

float somar(float, float), subtrair (float, float), multiplicar(float, float), dividir (float, float);

int main (){
    float n1 = 2, n2 = 5;
    printf("%.2f + %.2f = %.2f\n", n1, n2, somar(n1, n2));
    printf("%.2f - %.2f = %.2f\n", n1, n2, subtrair(n1, n2));
    printf("%.2f * %.2f = %.2f\n", n1, n2, multiplicar(n1, n2));
    printf("%.2f / %.2f = %.2f\n", n1, n2, dividir(n1, n2));
    system ("pause");
    return 0;
}

float somar (float x, float y){
    return (x+y);
}

float subtrair (float x, float y){
    return (x-y);
}

float multiplicar (float x, float y){
    return (x*y);
}

float dividir (float x, float y){
    return (x / y);
}