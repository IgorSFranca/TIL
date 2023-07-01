/*Escreva um programa que declare um array de inteiros e preencha-o com números
digitados pelo usuário. Em seguida, calcule e imprima a média dos números no array.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int num[4]={}, i;
  float media = 0;
  for (i=1; i<=4; i++){
    printf("Informe o %i numero: ", i);
    scanf("%i", &num[i]);
    media = media + num[i];
  }
  printf("A media dos numeros digitados sao: %.2f\n", (media/4));
  system ("pause");
  return 0;
}