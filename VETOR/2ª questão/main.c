/*Fa?a um programa que preencha um vetor com oito n?meros inteiros, calcule e
mostre dois vetores resultantes. O primeiro vetor resultante deve conter os n?meros
positivos e o segundo, os n?meros negativos. Cada vetor resultante vai ter, no
m?ximo, oito posi??es, que poder?o n?o ser completamente utilizadas.*/

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

    printf("\nOS POSITIVOS S?O:\n");

    for(int i = 0; i < 8; i++){
        printf(" %d", vet2[i]);
    }

    printf("\nOS NEGATIVOS S?O:\n");

    for(int i = 0; i < 8; i++){

        if(vet3[i] >=0){ // fiz isso por conta de n?o ter nenhum valor inicial, da? o vetor ficaria com o valor da posi??o na mem?ria
            vet3[i] = 0;
        }
        printf(" %d", vet3[i]);
    }


    return 0;
}
