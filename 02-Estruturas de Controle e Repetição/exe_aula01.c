#include <stdio.h>

int main()
{

    float salário, inss, ir, sal_liquido;

    printf("Calculo de Salario Liquido Com desconto do IR e INSS\n\n");

    printf("\nDigite seu salário Bruto\n");

    scanf("%f", &salário);

    // Calcular o INSS

    if (salário <= 1320)

        inss = salário * 0.075;

    else if (salário >= 1320 && salário <= 2571.29)

        inss = salário * 0.09;

    else if (salário >= 2571.30 && salário <= 3856.94)

        inss = salário * 0.12;

    else if (salário >= 3856.95 && salário <= 7507.49)

        inss = salário * 0.14;

    else

        inss = 1051, 04; // teto de contribuição

    // Calcular o IR

    if (salário <= 1903.98)

        ir = salário * 0;

    else if (salário >= 1903.99 && salário <= 2826.65)

        ir = salário * 0.075;

    else if (salário >= 2826.66 && salário <= 3751.05)

        ir = salário * 0.15;

    else if (salário >= 3751.06 && salário <= 4664.68)

        ir = salário * 0.225;

    else if (salário > 4664.69)

        ir = salário * 0.275;

    // Calculo do Salario liquido

    sal_liquido = (salário - inss) - ir;

    // Resultados

    printf("\nDesconto do INSS e: %.2f\n\n", inss);

    printf("Desconto do imposto de renda e: %.2f\n\n", ir);

    printf("Salário líquido: %.2f\n\n", sal_liquido);

    return 0;
}