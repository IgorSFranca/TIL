/*Faça uma função em C que recebe um array de inteiros e o seu tamanho 
como parâmetros, e retorna a média dos elementos.*/

#include <stdio.h>
#include <stdlib.h>

void media (num, tam);

int main (){
  int tam, num, i;
  printf("Informe quantas notas serao inseridas: ");
  scanf("%i", &tam);
  for (i = 0; i<= tam; i++){
    printf("Informe o %i elemento do array: ", i);
    scanf("%i", &num);
  }
  media (num, tam);
  system ("pause");
  return 0;
}

void media (num, tam){
  float soma;
  for (int i=0; i<= tam; i++){
    soma = soma+num;
  }
  printf("A media eh: %.2f\n", (soma/tam));
}