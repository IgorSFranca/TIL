/*
(e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre
suas bandas favoritas ou não.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

typedef struct{
  char nome[50];
  char genero[50];
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
void busca_genero(banda*);
void busca_nome(banda*);

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
          case 1: //Procura por ranking
            system("cls");
            cabecalho();
            busca_ranking(artista);
            break;
          case 2: //Procura as bandas do gênero
            system("cls");
            cabecalho();
            busca_genero(artista);
            break; 
          case 3: //Procura por nome
            system("cls");
            cabecalho();
            busca_nome(artista);
            break;
          case 4: break;
          default: 
            printf("Opcao nao encontrada.\n");
            system("pause");
        }
        break;
      case 3: 
        system("cls");
        cabecalho();
        mostrar_ranking(&artista);
        system ("pause");
        break;
      case 0: 
        printf("Encerrando");
        for (i=0; i<3; i++){
          Sleep(500);
          printf(".");
        }
        break;
      default: printf("Opcao nao encontrada.\n"); break;
    }
  } while (opcao != 0);

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
  printf(" [0] Encerrar                               \n");
  printf("--------------------------------------------\n");
}

void menu_busca(){
  printf("              MODO DE PROCURA               \n");
  printf(" [1] Informando o ranking                   \n");
  printf(" [2] Informando o genero                    \n");
  printf(" [3] Informando o nome da banda             \n");
  printf(" [4] Retornar                               \n");
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
  char genero;
  char qtd_integrantes;
  char ranking_str[2];

  for (i=0; i<5; i++){
    printf("Artista/Banda n%i\n", i+1);
    printf("Nome da banda/artista: ");
    fflush (stdin);
    fgets(artista[i].nome, 50, stdin);

    printf("Informe o genero [sertanejo/rock/pagode/rap/outro]: ");
    fflush(stdin);
    fgets(artista[i].genero, 50, stdin);

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

  if (artista[0].ranking == 0)
    printf("Bandas ainda nao cadastradas.\n");
  else{
    for (i=0; i<5; i++){
      printf("Nome da banda/artista: %s", artista[i].nome);
      printf("Genero: %s", artista[i].genero);
      printf("Quantidade de integrantes: %d\n", artista[i].qtd_integrantes);
      printf("Ranking: %d\n\n", artista[i].ranking);
    }
  }
}

void busca_ranking(banda *artista){
  int i;
  char ranking;

  printf("Informe o ranking: ");
  scanf("%d", &ranking);

  printf("Procurando");
  for (i=0; i<3; i++){
    Sleep(500);
    printf(".");
  }
  printf("\n\n");
  for (i=0; i<5; i++){
    if (artista[i].ranking == ranking){
      printf("Banda de Ranking: %d \n", ranking);
      printf("Nome da banda/artista: %s", artista[i].nome);
      printf("Genero: %s", artista[i].genero);
      printf("Quantidade de integrantes: %d\n\n", artista[i].qtd_integrantes);
      break;
    }
  }
    if (ranking < 1 || ranking > 4 || artista[0].ranking == 0)
      printf("Ranking nao encontrado!\n\n");
  system("pause");
}

void busca_genero(banda *artista){
  int i;
  int flag;
  char genero[50];
  flag = -1;

  printf("Informe o genero para busca [sertanejo/rock/pagode/rap/outro]: ");
  fflush(stdin);
  fgets(genero, 50, stdin);

  for (i=0; i<5; i++){
    if (strcmp(artista[i].genero, genero) == 0){
      printf("Nome da banda/artista: %s", artista[i].nome);
      printf("Genero: %s", artista[i].genero);
      printf("Quantidade de integrantes: %d\n", artista[i].qtd_integrantes);
      printf("Ranking: %d\n\n", artista[i].ranking);
      flag = 0;
    }
  }
  if (flag == -1)
    printf("Genero nao encontrado.\n");

  system("pause");
}

void busca_nome (banda *artista){
  int i;
  int flag;
  char nome[50];
  flag = -1;

  printf("Informe o nome da banda para busca: ");
  fflush(stdin);
  fgets(nome, 50, stdin);

  for (i=0; i<5; i++){
    if (strcmp(artista[i].nome, nome) == 0){
      printf("Esta banda esta no ranking!\n");
      printf("---------------------------\n");
      printf("Nome da banda/artista: %s", artista[i].nome);
      printf("Genero: %s", artista[i].genero);
      printf("Quantidade de integrantes: %d\n", artista[i].qtd_integrantes);
      printf("Ranking: %d\n\n", artista[i].ranking);
      flag = 0;
    }
  }
  if (flag == -1)
    printf("Esta banda nao esta no ranking.\n");
  system("pause");
}