/*Brasilino recebeu seu sal?rio do m?s, mas tem 2 contas atrasadas. Receba os valores do sal?rio, das
contas e calcule quanto sobrou do sal?rio de Brasilino, sendo que ele precisa pagar ainda 5% de multa
em cada uma das contas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "Portuguese");

    float salario, conta1, conta2, resultado;

    printf("Digite o valor do sal?rio: ");
    scanf("%f", &salario);

    printf("Digite o valor da primeira conta: ");
    scanf("%f", &conta1);

    printf("Digite o valor da segunda conta: ");
    scanf("%f", &conta2);

    resultado = salario - (conta1 + (conta1 * 0.05)) - (conta2 + (conta2 * 0.05));

    printf("\nO restante do sal?rio ?: %.2f", resultado);

    return 0;
}
