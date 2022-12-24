/*Sabemos que a área de círculo é dado por A = π * r^2, sendo r o raio do círculo. Faça um programa
que receba a área de um círculo e indique qual o raio dele. Obs.: Para calcular a raiz quadrada, utilize
a função sqrt da biblioteca math.h. Ex.: sqrt(4) irá resultar no valor 2, e sqrt(x) irá resultar na
raiz quadrada de x*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(0, "Portuguese");

    float area, raio;

    printf("Digite a área do circulo: ");
    scanf("%f", &area);

    raio = sqrt(area/3.14);

    printf("\nO raio do circulo é: %.2f", raio);
    return 0;
}
