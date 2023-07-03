/*Crie uma função em C que recebe um número inteiro como parâmetro e verifica se 
ele é par ou ímpar, retornando 1 para par e 0 para ímpar.*/

#include <stdio.h>
#include <stdlib.h>

void fpi (int num);

int main (){
  int num; 
  printf("Insira um valor para saber se eh par ou impar: ");
  scanf("%i", &num);
  fpi (num);
  system ("pause");
  return 0;
}

void fpi (int num){
  if (num % 2 == 0)
    printf("Este numero eh PAR\n");
  else 
    printf("Este numero eh IMPAR\n");
}