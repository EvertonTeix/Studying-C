//A partir do pre?o de um produto e uma porcentagem de desconto, informe o novo valor dele.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "Portuguese");

    float preco, porcentagem, resultado;

    printf("Digite o pre?o de um produto: ");
    scanf("%f", &preco);

    printf("Digite a porcentagem de desconto desejada: ");
    scanf("%f", &porcentagem);

    resultado = preco - (preco * (porcentagem/100));

    printf("\nO novo pre?o do produto ?: %.2f ",resultado);

    return 0;
}
