#include <stdio.h>

struct Conta
{
    int numero;
    char titular[50];
    float saldo;
};

void realizarDeposito(struct Conta *conta, float valor)
{
    conta->saldo += valor;
}

int realizarSaque(struct Conta *conta, float valor)
{
    if (conta->saldo >= valor)
    {
        conta->saldo -= valor;
        return 1; // Saque bem-sucedido
    }
    else
    {
        printf("Saldo insuficiente para realizar o saque.\n");
        return 0; // Saque mal-sucedido
    }
}

int realizarTransferencia(struct Conta *origem, struct Conta *destino, float valor)
{
    if (realizarSaque(origem, valor))
    {
        realizarDeposito(destino, valor);
        return 1; // Transferência bem-sucedida
    }
    else
    {
        printf("Transferência mal-sucedida.\n");
        return 0; // Transferência mal-sucedida
    }
}

int main()
{
    // Criação de duas instâncias da estrutura Conta
    struct Conta contas[2] = {
        {1, "Cliente1", 1000.0},
        {2, "Cliente2", 500.0}};

    int op, cc, cc2;
    float valor = 0;

    do
    {
        printf("\n=== BOLSOFURADO BANK ===\n\n");
        printf(" Saldo Conta 1: R$%.2f\n", contas[0].saldo);
        printf(" Saldo Conta 2: R$%.2f\n\n", contas[1].saldo);

        printf(" 1 - Depósito\n");
        printf(" 2 - Saque\n");
        printf(" 3 - Transferência\n");
        printf(" 4 - Sair\n");

        printf("\n Escolha uma opção: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\n Qual a conta para depósito (1 ou 2)? ");
            scanf("%d", &cc);
            printf(" Qual o valor? ");
            scanf("%f", &valor);
            realizarDeposito(&contas[cc - 1], valor);
            break;

        case 2:
            printf("\n Qual a conta para saque (1 ou 2)? ");
            scanf("%d", &cc);
            printf(" Qual o valor? ");
            scanf("%f", &valor);
            realizarSaque(&contas[cc - 1], valor);
            break;

        case 3:
            printf("\n Qual a conta de origem (1 ou 2)? ");
            scanf("%d", &cc);
            printf(" Qual a conta de destino (1 ou 2)? ");
            scanf("%d", &cc2);
            printf(" Qual o valor? ");
            scanf("%f", &valor);
            realizarTransferencia(&contas[cc - 1], &contas[cc2 - 1], valor);
            break;

        case 4:
            printf("\nSaindo...\n");
            break;

        default:
            printf("\nOpção inválida!\n");
            break;
        }

    } while (op != 4);

    return 0;
}
