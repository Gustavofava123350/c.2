#include <stdio.h>

void dobrar(int *numero)
{
    *numero *= 2;
}

int main()
{
    int valor = 5;

    printf("Valor antes da chamada da função: %d\n", valor);

    dobrar(&valor);

    printf("Valor depois da chamada da função: %d\n", valor);

    return 0;
}
