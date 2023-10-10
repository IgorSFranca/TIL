/*(a) Defina uma nova estrutura para representar uma banda musical. Essa estrutura
deve ser armazenar informações como nome, gênero, número de integrantes e em que
posição do ranking essa banda está dentre as suas 5 bandas favoritas.
(b) Instancie um vetor do tipo estrutura com tamanho 5. Crie um laço para preencher as
5 variáveis criadas. Após o preenchimento, exiba todas as informações da estrutura.
(c) Crie uma função que solicite ao usuário um número de 1 até 5. Em seguida, seu
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
2. Não pode deixar inserir letra no ranking e na quantidade de integrantes
3. Alterar a informação do genero para índice e travar caso o usuário digite um índice errado
4. Não aceitar ranking diferente do intervalo de 1 a 5
5. Está printando todas as bandas depois de procurar
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct{
  char nome[20];
  char genero[20];
  int qtd_integrantes;
  int ranking;
} banda;

void cabecalho();
void menu_principal();
void menu_busca();
int escolha_opcao(int);
void preencher_ranking(banda*);
void mostrar_ranking(banda*);
void busca_ranking(banda*);
void busca_genero();
void busca_nome();

int main (){
  int opcao;
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
        preencher_ranking(&artista);
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
            busca_ranking(&artista);
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
      case 4: printf("Encerrando programa.\n"); break;
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

void preencher_ranking(banda *artista){
  int i, j, ranking, flag;

  for (i=0; i<5; i++){
    printf("Artista/Banda n%i\n", i+1);
    printf("Nome da banda/artista: ");
    fflush (stdin);
    fgets(artista[i].nome, 20, stdin);
    printf("Informe o genero [sertanejo/rock/pagode/rap]: ");
    fflush (stdin);
    fgets(artista[i].genero, 20, stdin);
    printf("Quantos integrantes fazem parte da banda?: ");
    scanf("%i", &artista[i].qtd_integrantes);
    do{
      flag = 0;
      printf("Qual o ranking da banda? [1 ate 5]: ");
      scanf("%i", &ranking);
      for (j=0; j<5; j++){
        if (artista[j].ranking == ranking){
          printf("Este ranking ja esta preenchido na posicao %i\n", j);
          printf("Insira novamente!\n");
          break;
        }
        else if (artista[j].ranking == 0){
          artista[i].ranking = ranking;
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

  printf("As informacoes fornecidas foram: \n\n");
  for (i=0; i<5; i++){
    printf("Nome da banda/artista: %s", artista[i].nome);
    printf("Genero: %s", artista[i].genero);
    printf("Quantidade de integrantes: %i\n", artista[i].qtd_integrantes);
    printf("Ranking: %i\n\n", artista[i].ranking);
  }
}

void busca_ranking(banda *artista){
  int i, ranking, flag;
  flag = -1;

  printf("Informe o ranking: ");
  scanf("%i", &ranking);

  printf("Procurando");
  for (i=0; i<3; i++){
    Sleep(500);
    printf(".");
  }
  printf("\n\n");
  for (i=0; i<5; i++){
    if (artista[i].ranking == ranking){
      printf("Banda de Ranking: %i \n", ranking);
      printf("Nome da banda/artista: %s", artista[i].nome);
      printf("Genero: %s", artista[i].genero);
      printf("Quantidade de integrantes: %i\n\n", artista[i].qtd_integrantes);
      flag = 0;
      break;
    }
  }
    if (flag == -1)
      printf("Ranking nao encontrado!\n\n");
  system("pause");
}