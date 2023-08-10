/*Escreva um programa que declare um array de caracteres contendo uma frase. 
Em seguida, conte e imprima o número de palavras na frase.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
  int i, palavra = 0;
  char frase[] = "Frase exemplo para o exercicio.";
  for (i=0; i<=(sizeof(frase)); i++){
    printf("%c", frase[i]);
    if (frase[i] == ' ')
      palavra++;
  }
  printf("Numero de palavras: %i\n", palavra+1);
  system ("pause");
  return 0;
}