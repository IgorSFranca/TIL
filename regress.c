#include <stdio.h>
#include <stdlib.h>

int main (){
    int num, i;
    printf("Valor: ");
    scanf("%i", &num);
    for (i = num; i >= 0; i--)
        printf("%i\n", i);

    system ("pause");
    return 0;
}