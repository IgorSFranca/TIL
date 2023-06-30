/*Escreva um programa que declare um array de inteiros e preencha-o com os números de 1 a 10. 
Em seguida, imprima os elementos do array na ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int num[11]={}, i;
  for (i=1; i<=10; i++){
    printf("Insira um valor: ");
    scanf("%d", &num[i]);
  }
  for (i=10; i>=1; i--){
    printf("A posicao %i foi: %i.\n", i, num[i]);
  }
  system ("pause");
  return 0;
}