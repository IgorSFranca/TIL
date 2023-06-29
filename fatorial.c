#include <stdio.h>
#include <stdlib.h>

int main (){
    int num, i, fatorial = 1;
    printf("Informe um numero para mostrar o seu fatorial: ");
    scanf("%i", &num);
    for (i = 1; i <= num; i++)
        fatorial = fatorial * i;
    printf("%i! eh o mesmo que = %i\n", num, fatorial);
    system ("pause");
    return 0;
}