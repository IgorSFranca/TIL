/*Faça uma solução para um único módulo calcular a área e o perímetro de
um retângulo, cujos resultados devam ser exibidos na main(). Utilize apenas
variáveis locais
*/

#include <stdio.h>
#include <stdlib.h>

//Protótipos
void area_perimetro(int *, int *);

int main (){
    int area, perimetro;
    area_perimetro(&area, &perimetro);
    printf("Area do retangulo: %i\n", area);
    printf("Perimetro do retangulo: %i.\n", perimetro);
    system ("pause");
    return 0;
}

//Procedimentos e funções
void area_perimetro(int *area, int *perimetro){
    int base, altura;
    printf("Informe o valor da base: ");
    scanf("%i", &base);
    printf("Informe a altura: ");
    scanf("%i", &altura);
    *area = base*altura;
    *perimetro = (base*altura)*2;
}