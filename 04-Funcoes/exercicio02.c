
#include <stdio.h>

int fatorial(int n)
{
    int res = 1;

    if (n == 0)
        return 1;
    else
    {

        for (int i = n; i > 1; i--)
        {
            res = res * i;
        }
    }
    return res;
}

int main()
{
    int numero;
    printf("digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0)
        printf("numero negativo!");
    else
        printf("resultado = %d", fatorial(numero));
    return 0;
}
