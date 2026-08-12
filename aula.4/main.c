#include <stdio.h>

int main()
{
    float metragem1 = 0, metragem2 = 0, resultado = 0;
    int resp;
    do
    {
        printf("Calculo de metros qadrados\n\n");
        printf("Digite a 1 a metragem do terreno:");
        scanf("%f", &metragem1);
        printf("\nDigite a 2 a metragem do terreno:");
        scanf("%f", &metragem2);
        resultado = (metragem1 * metragem2);
        printf("\nTerreno tem = %.2fm2\n", resultado);
        printf("\nDeseja calcular outro terreno? (1-Sim / 2-Nao):");
        scanf("%d", &resp);
    } while (resp == 1);

    return 0;
}
