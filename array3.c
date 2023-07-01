/*Escreva um programa que declare dois arrays de inteiros do mesmo tamanho e preencha-os 
com números digitados pelo usuário. Em seguida, calcule a soma dos elementos correspondentes 
dos dois arrays e armazene o resultado em um terceiro array. Por fim, imprima os elementos do 
terceiro array.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int num1[5]={}, num2[5]={}, num3[5]={}, i;
  for (i=1; i<=5; i++){//Recolhendo os valores do 1º array
    printf("Informe o %i numero do 1 array: ", i);
    scanf("%i", &num1[i]);
  }
  for (i=1; i<=5; i++){//Recolhendo os valores do 2º array
    printf("Informe o %i numero do 2 array: ", i);
    scanf("%i", &num2[i]);
  }
  for (i=1; i<=5; i++){//Fazendo a soma dos valores nas posições correspondentes
    num3[i] = num1[i]+num2[i];
  }
  for (i=1; i<=5; i++){//Mostrando os resultados
    printf("A soma do %i valor eh: %i\n", i, num3[i]);
  }
  system ("pause");
  return 0;
}