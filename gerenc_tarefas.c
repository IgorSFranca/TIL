/*
Atividade: Sistema de gerenciamento de tarefas

Objetivo: Desenvolver um programa em C que permita ao usuário criar, 
visualizar e marcar tarefas como concluídas.

Requisitos:

01. O programa deve permitir ao usuário criar uma nova tarefa, 
informando o título e a descrição da mesma.
02. O programa deve armazenar as tarefas criadas em um array.
03. O programa deve permitir ao usuário visualizar todas as tarefas criadas, 
exibindo o título e o status de cada uma (concluída ou não).
04. O programa deve permitir ao usuário marcar uma tarefa como concluída, 
informando o número da tarefa.
05. O programa deve exibir uma mensagem de erro caso o número da tarefa 
informado pelo usuário seja inválido.
06. O programa deve permitir ao usuário sair do sistema quando desejar.

Dicas:

- Utilize uma estrutura (struct) para representar cada tarefa, com 
campos para o título, descrição e status.
- Utilize um for loop para percorrer o array de tarefas ao exibi-las e 
ao verificar o número informado pelo usuário para marcar uma tarefa como concluída.
- Utilize um switch para implementar as diferentes opções do menu do 
sistema (criar tarefa, visualizar tarefas, marcar tarefa como concluída, sair do sistema).
- Lembre-se de utilizar as habilidades mencionadas anteriormente, 
como variáveis, if/else, switch, for loop, arrays, strings, booleans e 
funções. Além disso, você também pode considerar a criação de um arquivo 
para armazenar as tarefas de forma persistente, permitindo que elas sejam 
recuperadas mesmo após o programa ser encerrado.*/

#include <stdio.h>
#include <stdlib.h>

void nov_tarefa(){
    int i;
    char tarefa[30];
    printf("---------------------------------------------\n");
    printf("             INCLUIR NOVA TAREFA             \n");
    printf("---------------------------------------------\n");
    for (i=0;i<=0;i++){
        printf("Descricao da tarefa: ");
        scanf("%s", &tarefa[i+1]);
        printf("Situacao [P=Pendente][C=Concluida]: ");
        scanf("%s", &tarefa[i+2]);
    }
    printf("---------------------------------------------\n");
}

int main (){
    int opcao; 
    printf("=============================================\n");
    printf("            GERENCIADOR DE TAREFAS           \n");
    printf("=============================================\n");
    printf("OPCOES: \n");
    printf("[1] Nova Tarefa\n");
    printf("[2] Excluir Tarefa\n");
    printf("[3] Concluir Tarefa\n");
    printf("[4] Visualizar Tarefas\n");
    printf("[5] Encerrar aplicativo\n");
    printf("=============================================\n");
    do{
        printf("Digite a opcao: ");
        scanf("%i", &opcao);
        switch (opcao){
            case 1: nov_tarefa(); break;
            case 2: //exc_tarefa(); break;
            case 3: //con_tarefa(); break;
            case 4: //vis_tarefa(); break;
            case 5: break;
            default: 
                printf("Opcao invalida!\n");
        }
    } while (opcao!=5);
    system ("pause");
    return 0;
}