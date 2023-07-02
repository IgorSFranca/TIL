/*Escreva um programa que declare um array de caracteres contendo uma palavra. 
Em seguida, verifique se a palavra é um palíndromo (ou seja, se ela é a mesma lida de 
trás para frente) e imprima uma mensagem correspondente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
  int i, cont = 0;
  char palindo[40], pavindo[strlen(palindo)];
  printf("Informe a palavra para ser verificada: ");
  scanf("%s", &palindo);
  for (i=0; i<= (strlen(palindo)-1); i++) //invertendo as letras no outro array
    pavindo[(strlen(palindo)-1-i)] = palindo[i]; 
  printf("A palavra invertida eh: ");
  for (i=0; i<=(strlen(palindo)); i++) //mostrando o array com as letras invertidas
    printf("%c", pavindo[i]); 
  printf("\n");
  for (i=0; i<=(strlen(palindo)-1); i++){//calculando se as letras sao iguais
    if (palindo[i] == pavindo[i])
      cont++;
  }
  if (cont == (strlen(palindo)))//mostrando o resultado encontrado
    printf ("A palavra EH UM palindromo.\n");
  else
    printf("A palavra NAO EH um palindromo.\n");
  printf("\n");
  system ("pause");
  return 0;
}