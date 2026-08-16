#include <stdio.h>
#include <math.h>

float calcularRaiz(float n, float raizAnt)
{
    float raiz = (pow(raizAnt, 2) + n) / (2 * raizAnt);

    if (fabs(raiz - raizAnt) < 0.001)
        return raiz;

    return calcularRaiz(n, raiz);
}

int main()
{
    float numero, raiz;

    printf("\nDigite um número para calcular a raiz: ");
    scanf("%f", &numero);

    if (numero < 0)
    {
        printf("\nNão é possível calcular a raiz quadrada de número negativo!\n");
        return 1;
    }

    raiz = calcularRaiz(numero, numero / 2);

    printf("\nRaiz quadrada: %f\n", raiz);

    return 0;
}
