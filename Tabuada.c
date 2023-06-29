#include <stdio.h>
#include <stdlib.h>

int main (){
    int p, s;
    printf("Tabuada 1 ao 4\n");
    for (p = 1; p <= 4; p++){
        printf("------------------------------\n");
        for (s = 1; s <= 10; s++)
            printf("%i x %i = %i\n", p, s, (p*s));
    }
    system ("pause");
    return 0;
}