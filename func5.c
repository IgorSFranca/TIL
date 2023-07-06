/*Faça uma função em C que recebe um número inteiro e retorna o número invertido. 
Por exemplo, se o número for 12345, a função deve retornar 54321.*/

#include <stdio.h>
#include <stdlib.h>

void NumInvertido(int num){
    int i, ninvert[] = num;
    for (i=sizeof(ninvert); i<=0; i--){
        printf("%i ", ninvert[i]);
    }
}

int main (){
    int num = {"1325621"};
    NumInvertido(num);
    system ("pause");
    return 0;
}