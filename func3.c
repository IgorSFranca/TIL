/*Escreva uma função em C que recebe um número inteiro positivo e 
retorna o fatorial desse número.*/

#include <stdio.h>
#include <stdlib.h>

void fatorial(int num){
  int total=1;
  for (int i=num; i>=1; i--){
    total = total * i;
  }
  printf("O fatorial de %i eh %i\n", num, total);
}

int main (){
  int num;
  printf("Informe o numero para exibir seu fatorial: ");
  scanf("%i", &num);
  fatorial(num);
  system ("pause");
  return 0;
}
