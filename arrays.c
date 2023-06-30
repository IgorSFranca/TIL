#include <stdio.h>
#include <stdlib.h>

int main (){
  int num[] = {}, i;
  for (i=1; i<=5; i++){
    printf("%i num: ", i);
    scanf("%d", &num[i]);
  }
  for (i=1; i<=5; i++)
    printf("%i, ", num[i]);
  system ("pause");
  return 0;
}