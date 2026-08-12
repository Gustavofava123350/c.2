#include <stdio.h>

int main()
{
    int idade, soma = 0, contPessoas = 0;

    while (1)
    {
        printf("Digite a idade (ou 0 para encerrar): ");
        scanf("%d", &idade);

        if (idade == 0)
        {
            break;
        }
        if (idade < 0)
        {
            printf("Idade inválida. Digite novamente.\n");
            continue;
        }
        if (idade >= 18)
        {
            soma += idade;
            contPessoas++;
        }
    }

    if (contPessoas > 0)
    {
        float media = (float)soma / contPessoas;
        printf("Média das idades das pessoas com 18 anos ou mais: %.2f\n", media);
    }
    else
    {
        printf("Nenhuma pessoa com 18 anos ou mais foi registrada.\n");
    }

    return 0;
}
