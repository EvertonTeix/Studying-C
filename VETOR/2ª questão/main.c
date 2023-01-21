/*Faça um programa que preencha um vetor com oito números inteiros, calcule e
mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números
positivos e o segundo, os números negativos. Cada vetor resultante vai ter, no
máximo, oito posições, que poderão não ser completamente utilizadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "Portuguese");

    int vet1[8] = {1, 2, 3, 4, -1, -2, -3, -4};
    int vet2[8];
    int vet3[8];

    for(int i = 0; i < 8; i++){
        if(vet1[i] > 0){
            vet2[i] = vet1[i];
        }
        if(vet1[i] < 0){
            vet3[i] = vet1[i];
        }
    }

    printf("\nOS POSITIVOS SÃO:\n");

    for(int i = 0; i < 8; i++){
        printf(" %d", vet2[i]);
    }

    printf("\nOS NEGATIVOS SÃO:\n");

    for(int i = 0; i < 8; i++){

        if(vet3[i] >=0){ // fiz isso por conta de não ter nenhum valor inicial, daí o vetor ficaria com o valor da posição na memória
            vet3[i] = 0;
        }
        printf(" %d", vet3[i]);
    }


    return 0;
}
