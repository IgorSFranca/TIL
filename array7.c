/*Escreva um programa que declare um array de inteiros e preencha-o com números digitados 
pelo usuário. Em seguida, ordene os elementos do array em ordem crescente e imprima o 
array resultante.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int i, num[5];
  for (i=1; i<=5; i++){
    printf("%i numero: ", i);
    scanf("%i", &num[i]);
  }
  selectionSort (num, 5);
  
  printf("O array ordenado: ");
  for (i=1; i<=5; i++){
    printf("%i ", num[i]);
  }
  system ("pause");
  return 0;
}