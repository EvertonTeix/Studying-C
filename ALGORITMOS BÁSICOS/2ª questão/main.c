/*Brasilino recebeu seu salário do mês, mas tem 2 contas atrasadas. Receba os valores do salário, das
contas e calcule quanto sobrou do salário de Brasilino, sendo que ele precisa pagar ainda 5% de multa
em cada uma das contas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "Portuguese");

    float salario, conta1, conta2, resultado;

    printf("Digite o valor do salário: ");
    scanf("%f", &salario);

    printf("Digite o valor da primeira conta: ");
    scanf("%f", &conta1);

    printf("Digite o valor da segunda conta: ");
    scanf("%f", &conta2);

    resultado = salario - (conta1 + (conta1 * 0.05)) - (conta2 + (conta2 * 0.05));

    printf("\nO restante do salário é: %.2f", resultado);

    return 0;
}
