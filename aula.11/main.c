#include <stdio.h>

void exibirMenu();
void realizarAcao(int escolha);

int main()
{
    int escolha;

    do
    {
        exibirMenu();
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        realizarAcao(escolha);
    } while (escolha != 0);

    return 0;
}

void exibirMenu()
{
    printf("=== Menu ===\n");
    printf("1. Opção 1\n");
    printf("2. Opção 2\n");
    printf("0. Sair\n");
}

void realizarAcao(int escolha)
{
    switch (escolha)
    {
    case 1:
        printf("Você escolheu a opção 1.\n");
        break;
    case 2:
        printf("Você escolheu a opção 2.\n");
        break;
    case 0:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção inválida.\n");
    }
}
