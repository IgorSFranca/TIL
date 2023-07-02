/*Escreva um programa que declare um array de inteiros e preencha-o com números digitados 
pelo usuário. Em seguida, verifique se um número específico digitado pelo usuário está 
presente no array e imprima uma mensagem correspondente.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int num[4], i, valor, total = 0;
  for (i=1; i<=4; i++){
    printf("%i numero: ", i);
    scanf("%i", &num[i]);
      }
  printf("Informe um numero para ser verificado: ");
  scanf("%i", &valor);
  for (i=1; i<=4; i++){
    if (num[i] == valor)
      total++;
  }
  if (total == 1)
    printf ("O valor informado FAZ PARTE do array.\n");
  else
    printf("O valor informado NAO FAZ PARTE do array.\n");
  system ("pause");
  return 0;
}