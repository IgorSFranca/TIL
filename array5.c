/*Escreva um programa que declare um array de inteiros e preencha-o com números digitados 
pelo usuário. Em seguida, inverta a ordem dos elementos no array e imprima o array resultante.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int num1[5], num2[5], i;
  for (i=1; i<=5; i++){
    printf("%i numero: ", i);
    scanf("%i", &num1[i]);
  }
  for (i=1; i<=5; i++){
    printf("Na posicao %i, possui: %i\n", i, num1[i]);
  }
  for (i=1; i<=5; i++){
    num2[i] = num1[6-i];     
  }
  printf("e agora... \n");
  for (i=1; i<=5; i++)
    printf("Na posicao %i, possui: %i\n", i, num2[i]);
  system("pause");
  return 0;
}