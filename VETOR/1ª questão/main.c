/*Faça um programa que recebe cinco números inteiros inseridos pelo usuário e
guarde-os em um vetor. Depois mostre o maior e o menor número.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite o valor [%d] ", i+1);
        scanf("%d", &vetor[i]);
    }

    int menor = vetor[0];
    int maior = vetor[0];

    for(int i = 0; i < 5; i++){
        if(menor > vetor[i]){
            menor = vetor[i];
        }
        if(maior < vetor[i]){
            maior = vetor[i];
        }
    }
    printf("\nO menor valor e %d", menor);
    printf("\nO maior valor e %d", maior);
    return 0;
}
