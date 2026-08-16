#include <stdio.h>

int fatorial(int n)
{
    int res = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            res = res * i;
        }
    }
    return res;
}

int main()
{
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Número negativo!\n");
    }
    else
    {
        printf("Resultado: %d\n", fatorial(numero));
    }

    return 0;
}
