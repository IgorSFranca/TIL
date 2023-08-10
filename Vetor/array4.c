/*Escreva um programa que declare um array de inteiros e preencha-o com números aleatórios. 
Em seguida, encontre e imprima o maior e o menor número no array.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int num[4]={}, maior, menor, i;
  for (i=1; i<=4; i++){
    printf("Informe o %i numero: ", i);
    scanf("%i", &num[i]);
    if (num[i] == num[1]){
      maior = num[i];
      menor = num[i];
    }
    if (num[i] < menor)
      menor = num[i];
    if (num[i] > maior)
      maior = num[i];
  }
  printf("O Maior numero digitado foi: %i\n", maior);
  printf("O Menor numero digitado foi: %i\n", menor);
  system ("pause");
  return 0;
}