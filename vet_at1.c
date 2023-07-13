/*Faça uma solução para computar a nota de 10 alunos. Ao término,
mostrar as notas cujo valor tenha sido superior à média de notas da turma*/


#include <stdio.h>
#include <stdlib.h>

int main (){
    float total = 0, num[10];
    int i;
    for (i=0; i<10; i++){
        do{
            printf("Informe uma nota %d: ", i+1);
            scanf("%f", &num[i]);
            total = total+num[i];
        } while(num[i]<0||num[i]>10);
    }
    printf("A media da turma foi: %.2f.\n", total/10);
    printf("----------------------------\n");
    for (i=0; i<10; i++){
        if (num[i]>=(total/10))
            printf("A nota %.2f foi maior que a media.\n", num[i]);
    }
    system ("pause");
    return 0;
}