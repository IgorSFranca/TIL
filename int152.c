#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;
    printf("Numeros inteiros de 3 a 15, menos o 11\n");
    for (i = 3; i <= 15; i++){
        if (i != 11)
            printf("%i\n", i);
    }
    system ("pause");
    return 0;
}