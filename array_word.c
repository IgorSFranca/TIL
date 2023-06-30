/*Escreva um programa que declare um array de caracteres e preencha-o com uma palavra digitada 
pelo usuário. Em seguida, imprima cada caractere do array em uma linha separada.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
  int i;
  char frase[10]={};
  printf("Digite uma palavra: ");
  scanf("%s", &frase[0]);
  for (i=0; i<=sizeof(frase); i++)
  printf("%c\n", frase[i]);
  system("pause");
  return 0;
}