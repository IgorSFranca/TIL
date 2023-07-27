/*Faça uma solução para obter 2 notas de um aluno, realizar e exibir a
média, e mostrar a situação do aluno (Aprovado para média >=6 ou
Reprovado, caso contrário). Use modularidade
*/

#include <stdio.h>
#include <stdlib.h>

float media(float, float);

int main (){
    float n1, n2;
    scanf("%f", &n1);
    printf("Informe a n2: ");
    scanf("%f", &n2);
    printf("A media foi: %.2f\n", media(n1, n2));
    if (media(n1, n2) >= 6)
        printf("APROVADO\n");
    else
        printf("REPROVADO\n");
    system ("pause");
    return 0;
}

float media(float x, float y){
    float soma; 
    soma = x + y;
    return (soma/2);
}