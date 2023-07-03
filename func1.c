/*Escreva uma função em C que recebe dois números inteiros como 
parâmetros e retorna a soma deles.*/

#include <stdio.h>
#include <stdlib.h>

void function (int num1, int num2);

int main (){
  int num1, num2;
  printf("Informe o 1 num: ");
  scanf("%i", &num1);
  printf("Informe o 2 num: ");
  scanf("%i", &num2);
  function (num1, num2);
  system ("pause");
  return 0;
}

void function (int num1, int num2){
  printf("A soma eh: %i\n", num1+num2);
}