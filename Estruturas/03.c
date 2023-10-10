/*(c) Crie uma função que solicite ao usuário um número de 1 até 5. Em seguida, seu
programa deve exibir informações da banda cuja posição no seu ranking é a que foi
solicitada pelo usuário.
(d) Crie uma função em C que solicite ao usuário um gênero musical e exiba as bandas
deste gênero em seu ranking. Obs.: Utilize a função strcmp da biblioteca string.h
para comparar duas strings.
(e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre
suas bandas favoritas ou não.
(f) Agora junte tudo e crie um programa que exiba um menu com as opções de preencher
as estruturas e todas as opções dos subitens anteriores.

Corrigir: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

typedef struct{
  char nome[50];
  int genero;
  int qtd_integrantes;
  int ranking;
} banda;

void cabecalho();
void menu_principal();
void menu_busca();
int escolha_opcao(int);
void preencher_bandas(banda*);
void mostrar_ranking(banda*);
void busca_ranking(banda*);
void busca_genero();
void busca_nome();

int main (){
  int opcao;
  int i;
  banda artista [5] = {[0] = {.ranking = {0, 0, 0, 0, 0}}};

  do{
    system ("cls");
    cabecalho();
    menu_principal();
    opcao = escolha_opcao(opcao);
    switch (opcao){
      case 1: 
        system ("cls");
        cabecalho();
        preencher_bandas(artista);
        printf("Preenchimento realizado com sucesso.\n");
        system ("pause");
        break;
      case 2: 
        system ("cls");
        cabecalho();
        menu_busca();
        opcao = escolha_opcao(opcao);
        switch (opcao){
          case 1: 
            system("cls");
            cabecalho();
            busca_ranking(artista);
            break;
          case 2: break;
          case 3: break;
        }
      case 3: 
        system("cls");
        cabecalho();
        mostrar_ranking(&artista);
        system ("pause");
        break;
      case 4: 
        printf("Encerrando");
        for (i=0; i<3; i++){
          Sleep(500);
          printf(".");
        }
        break;
      default: printf("Opcao nao encontrada.\n"); break;
    }
  } while (opcao != 4);

  Sleep(800);
  printf("Programa encerrado!\n");
  printf("----------------------------------------------\n");

  system("pause");
  return 0;
}

void cabecalho(){
  printf("--------------------------------------------\n");
  printf("                                            \n");
  printf("              ARQUIVO MUSICAL               \n");
  printf("                                            \n");
  printf("--------------------------------------------\n");
}

void menu_principal(){
  printf("             SELECIONE A OPCAO              \n");
  printf(" [1] Preencher ranking de artistas          \n");
  printf(" [2] Procurar                               \n");
  printf(" [3] Mostrar artistas                       \n");
  printf(" [4] Encerrar                               \n");
  printf("--------------------------------------------\n");
}

void menu_busca(){
  printf("              MODO DE PROCURA               \n");
  printf(" [1] Informando o ranking                   \n");
  printf(" [2] Informando o genero                    \n");
  printf(" [3] Informando o nome da banda             \n");
  printf("--------------------------------------------\n");
}

int escolha_opcao(int opcao){
  printf("Digite a opcao desejada: ");
  scanf("%i", &opcao);
  return opcao;
}

void preencher_bandas(banda *artista){
  int i;
  int j;
  int flag;
  int rank;
  char ranking;
  char qtd_integrantes;
  char ranking_str[2];

  for (i=0; i<5; i++){
    printf("Artista/Banda n%i\n", i+1);
    printf("Nome da banda/artista: ");
    fflush (stdin);
    fgets(artista[i].nome, 50, stdin);

    do{// 'do' de verificação se o usuário informou um gênero válido
      flag = 0;
      printf("Informe o genero [1-sertanejo/ 2-rock/ 3-pagode/ 4-rap]: ");
      scanf("%i", &artista[i].genero);
      if (artista[i].genero < 1 || artista[i].genero > 4){
        printf("Genero informado invalido.\n");
        printf("Informe novamente.\n");
      }
      else
        flag = 1;
    } while (flag != 1);

    do{ // 'do' de verificação se a qtd de integrandes é numero e não letra
      flag = 0;
      printf("Quantos integrantes fazem parte da banda?: ");
      scanf(" %c", &qtd_integrantes);
      if (!isdigit(qtd_integrantes)){
        printf("Valor informado nao eh numero.\n");
        printf("Insira novamente.\n");
      }
      else{
        artista[i].qtd_integrantes = qtd_integrantes - '0';
        flag = 1;
      }
    } while (flag != 1);

    do{ // 'do' de verificação da duplicidade do ranking

      do{ // 'do' de verificação se o ranking é numero e não letra
        flag = 0;
        printf("Qual o ranking da banda? [1 ate 5]: ");
        scanf(" %c", &ranking);
        if (!isdigit(ranking)){
          printf("Valor informado nao eh numero.\n");
          printf("Insira novamente.\n");
        }
        else{
          ranking_str[0] = ranking;
          ranking_str[1] = '\0';
          rank = atoi(ranking_str);

          if (rank < 1 || rank > 5){
            printf("Ranking informado invalido.\n");
            printf("Informe um ranking entre 1 e 5.\n");
          }
          else
            flag = 1;
        }
      } while (flag != 1);
      flag = 0;

      for (j=0; j<5; j++){ //Não permitir que insira ranking duplicado
        if (artista[j].ranking == rank){
          printf("Este ranking ja esta preenchido na posicao %i\n", j);
          printf("Insira novamente!\n");
          break;
        }
        else if (artista[j].ranking == 0){
          artista[i].ranking = rank;
          flag = 1;
          break;
        }
      }
    } while (flag != 1);

    printf("----------------------------------------------\n");
  }
}

void mostrar_ranking(banda *artista){
  int i;

  if (artista[0].genero == '0')
    printf("Bandas ainda nao cadastradas.\n");
  else{
    printf("As informacoes fornecidas foram: \n\n");
    for (i=0; i<5; i++){
      printf("Nome da banda/artista: %s", artista[i].nome);
      printf("Genero: ");
      if (artista[i].genero == 1)
        printf("Sertanejo.\n");
      else if (artista[i].genero == 2)
        printf("Rock.\n");
      else if (artista[i].genero == 3)
        printf("Pagode.\n");
      else if (artista[i].genero == 4)
        printf("Rap.\n");
      printf("Quantidade de integrantes: %d\n", artista[i].qtd_integrantes);
      printf("Ranking: %d\n\n", artista[i].ranking);
    }
  }
}

void busca_ranking(banda *artista){
  int i;
  char ranking;
  int flag;
  flag = -1;

  printf("Informe o ranking: ");
  scanf("%d", &ranking);

  printf("Procurando");
  for (i=0; i<3; i++){
    Sleep(500);
    printf(".");
  }
  printf("\n\n");
  for (i=0; i<5; i++){
    printf("artista[i].ranking = %c\n", artista[i].ranking);
    printf("Ranking: %i\n", ranking);
    if (artista[i].ranking == ranking){
      printf("Banda de Ranking: %d \n", ranking);
      printf("Nome da banda/artista: %s", artista[i].nome);
      printf("Genero: ");
      if (artista[i].genero == 1)
        printf("Sertanejo.\n");
      else if (artista[i].genero == 2)
        printf("Rock.\n");
      else if (artista[i].genero == 3)
        printf("Pagode.\n");
      else if (artista[i].genero == 4)
        printf("Rap.\n");
      printf("Quantidade de integrantes: %d\n\n", artista[i].qtd_integrantes);
      flag = 0;
      break;
    }
  }
    if (flag == -1)
      printf("Ranking nao encontrado!\n\n");
  system("pause");
}