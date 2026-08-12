#include <stdio.h>

int main()
{
    int x, Z;
    long int res = 1;

    printf("Digite o valor de X:");
    scanf("%d", &x);

    printf("Digite o valor de Z:");
    scanf("%d", &Z);

    for (int i = 0; i < Z; i++)
    {
        res *= x;
    }

    printf("%d elevado a %d é igual a %ld\n", x, Z, res);

    return 0;
}
