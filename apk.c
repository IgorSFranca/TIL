#include <stdio.h>

#define MAX_TRANSACOES 100

typedef enum { RECEITA, DESPESA } TipoTransacao;

typedef struct {
    TipoTransacao tipo;
    float valor;
} Transacao;

void registrarTransacao(Transacao transacoes[], int *numTransacoes) {
    if (*numTransacoes >= MAX_TRANSACOES) {
        printf("Limite de transacoes atingido.\n");
        return;
    }

    int opcao;
    printf("Tipo de transacao:\n");
    printf("1. Receita\n");
    printf("2. Despesa\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    TipoTransacao tipo;
    switch (opcao) {
        case 1:
            tipo = RECEITA;
            break;
        case 2:
            tipo = DESPESA;
            break;
        default:
            printf("Opcao invalida.\n");
            return;
    }

    float valor;
    printf("Valor da transacao: ");
    scanf("%f", &valor);

    transacoes[*numTransacoes].tipo = tipo;
    transacoes[*numTransacoes].valor = valor;

    (*numTransacoes)++;

    printf("Transacao registrada com sucesso.\n");
}

float calcularSaldo(Transacao transacoes[], int numTransacoes) {
    float receitaTotal = 0.0;
    float despesaTotal = 0.0;

    for (int i = 0; i < numTransacoes; i++) {
        if (transacoes[i].tipo == RECEITA) {
            receitaTotal += transacoes[i].valor;
        } else if (transacoes[i].tipo == DESPESA) {
            despesaTotal += transacoes[i].valor;
        }
    }

    return receitaTotal - despesaTotal;
}

void exibirTransacoesRecentes(Transacao transacoes[], int numTransacoes) {
    printf("Transacoes recentes:\n");

    int inicio = (numTransacoes > 5) ? numTransacoes - 5 : 0;

    for (int i = inicio; i < numTransacoes; i++) {
        char tipo[10];
        if (transacoes[i].tipo == RECEITA) {
            sprintf(tipo, "Receita");
        } else if (transacoes[i].tipo == DESPESA) {
            sprintf(tipo, "Despesa");
        }

        printf("- Tipo: %s, Valor: %.2f\n", tipo, transacoes[i].valor);
    }
}

int main() {
    Transacao transacoes[MAX_TRANSACOES];
    int numTransacoes = 0;

    int opcao;

    do {
        printf("\nMenu de opcoes:\n");
        printf("1. Registrar uma transacao\n");
        printf("2. Verificar saldo total\n");
        printf("3. Verificar transacoes recentes\n");
        printf("4. Sair do programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                registrarTransacao(transacoes, &numTransacoes);
                break;
            case 2:
                printf("Saldo total: %.2f\n", calcularSaldo(transacoes, numTransacoes));
                break;
            case 3:
                exibirTransacoesRecentes(transacoes, numTransacoes);
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 4);

    return 0;
}
