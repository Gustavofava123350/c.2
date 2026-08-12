#include <stdio.h>

int main()
{
    int n;
    int primeiro = 0, segundo = 1, proximo;
    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);
    printf("Sequência de Fibonacci ate o termo %d:\n ", n);
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
            proximo = i;
        else
        {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%d ", proximo);
    }
    return 0;
}
