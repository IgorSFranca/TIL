/*Suponha um cadastro de participantes como um registro contendo informações do nome,
CPF, tipo de participação (A, B, C ou D) e sócio da SBC (S – Sim ou N – Não). Escreva
uma função que receba um registro como parâmetro, calcule e retorne o valor que o
participante pagará para participar do evento. Considere ainda que sócio da SBC possui
20% de desconto.

Tipo de Partitipação   Valor a Pagar
A - 1 Curso               R$  30,00
B - 2 Cursos              R$  60,00
C - 3 Cursos              R$  90,00
D - 4 Cursos              R$ 100,00

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[30];
  char cpf;
  char tipo;
  char socio; 
} participante;

float valor_pagar(participante*);

int main (){
  participante atleta1;
  float valor;

  valor = valor_pagar(&atleta1);
  printf("\nNome do atleta: %s", atleta1.nome);
  printf("Valor a pagar: %.2f\n\n", valor);
  system ("pause");

  return 0;
}

float valor_pagar(participante *atleta1){

  float valor; 

  printf("Entre com as informacoes do atleta\n");
  printf("Nome: ");
  fgets(atleta1->nome, 30, stdin);
  printf("CPF: ");
  scanf(" %s", &atleta1->cpf);
  printf("Tipo de Participacao [A, B, C ou D]: ");
  scanf(" %c", &atleta1->tipo);
  printf("Socio da SBC [S/N]: ");
  scanf(" %c", &atleta1->socio);

  if (atleta1->tipo == 'a'||atleta1->tipo == 'A')
    valor = 30;
  else if (atleta1->tipo == 'b'||atleta1->tipo == 'B')
    valor = 60;
  else if (atleta1->tipo == 'c'||atleta1->tipo == 'C')
    valor = 90;
  else if (atleta1->tipo == 'd'||atleta1->tipo == 'D')
    valor = 100;

  if (atleta1->socio == 's'||atleta1->socio == 'S'){
    valor = valor*0.8;
    return valor;
  }
  else
    return valor;

}
