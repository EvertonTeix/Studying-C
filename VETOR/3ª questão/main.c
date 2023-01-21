/*Faça um programa que preencha dois vetores de dez números inteiros cada um e
mostre o vetor resultante da intercalação deles. Por exemplo, se o primeiro vetor
tem os valores: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 e o segundo vetor tem os valores: 10,
20, 30, 40, 50, 60, 70, 80, 90, 100 o programa deverá gerar um terceiro com os
seguintes valores: 1, 10, 2, 20, 3, 30, 4, 40, 5, 50, 6, 60, 7, 70, 8, 80, 9, 90, 10, 100. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0,"Portuguese");

    int vet1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vet2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(int i = 0; i < 10; i++){
        printf("[%d %d], ", vet1[i], vet2[i]);

    }
    return 0;
}
