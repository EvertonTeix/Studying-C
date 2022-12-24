/*A empresa CastelloFaber paga seus funcionários de acordo com as horas trabalhadas, segundo as
regras abaixo. Faça um programa que receba o valor do salário mínimo, a quantidade de horas
trabalhadas e a quantidade de horas extras trabalhadas para calcular o valor que um funcionário da
empresa irá receber:

a) A hora trabalhada vale 1/8 do salário mínimo;
b) A hora extra vale 1/4 do salário mínimo;
c) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo seu valor;
d) O valor extra equivale ao número de horas extras trabalhadas multiplicado pelo seu valor;
e) O salário total é dado pela soma do salário bruto com o valor extra, retirando 8% para o plano
de previdência complementar.
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

    printf("O salário total é: %.2f", salarioTotal);

    return 0;
}
