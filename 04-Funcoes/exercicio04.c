#include <stdio.h>

void decimalParaBinario(int decimal)
{
    if (decimal > 0)
    {
        decimalParaBinario(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main()
{
    int numeroDecimal;

    printf("\nDigite um numero decimal: ");
    scanf("%d", &numeroDecimal);

    if (numeroDecimal >= 0)
    {

        printf("O numero binario correspondente e: ");
        decimalParaBinario(numeroDecimal);
        printf("\n\n");
    }
    else
    {
        printf("Digite um numero decimal nao negativo.\n");
    }
    return 0;
}