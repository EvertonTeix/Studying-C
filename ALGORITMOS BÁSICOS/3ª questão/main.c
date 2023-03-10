/*A empresa CastelloFaber paga seus funcion?rios de acordo com as horas trabalhadas, segundo as
regras abaixo. Fa?a um programa que receba o valor do sal?rio m?nimo, a quantidade de horas
trabalhadas e a quantidade de horas extras trabalhadas para calcular o valor que um funcion?rio da
empresa ir? receber:

a) A hora trabalhada vale 1/8 do sal?rio m?nimo;
b) A hora extra vale 1/4 do sal?rio m?nimo;
c) O sal?rio bruto equivale ao n?mero de horas trabalhadas multiplicado pelo seu valor;
d) O valor extra equivale ao n?mero de horas extras trabalhadas multiplicado pelo seu valor;
e) O sal?rio total ? dado pela soma do sal?rio bruto com o valor extra, retirando 8% para o plano
de previd?ncia complementar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "Portuguese");

    float salario;
    int ht, het;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &ht);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%d", &het);

    float salarioBruto, salarioExtra;

    salarioBruto = ht * salario/8;
    salarioExtra = het * salario/4;

    float salarioTotal;

    salarioTotal = salarioBruto + salarioExtra;
    salarioTotal = salarioTotal - (salarioTotal * 0.08);

    printf("O sal?rio total ?: %.2f", salarioTotal);

    return 0;
}
