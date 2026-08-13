#include <stdio.h>

int main()
{

    int i, num[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero: ", i);
        scanf("%d", &num[i]);
    }

    for (i = 4; i >= 0; i--)
    {
        printf("%d\n", num[i]);
    }
    printf("\n\n\n");

    return 0;
}
