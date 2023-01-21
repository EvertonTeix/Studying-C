/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa cinco
tipos de objetos. O vendedor recebe, mensalmente, salário de R$ 1.100,00, acrescido de 5%
do valor total de suas vendas. O valor unitário dos objetos deve ser
informado e armazenado em um vetor; a quantidade vendida de cada peça deve
ficar em outro vetor, mas na mesma posição. Crie um programa que receba os preços e
as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos
com tamanho cinco). Depois, determine e mostre:

a) um relatório contendo: quantidade vendida, valor unitário e valor total de
cada objeto. Ao final, deverão ser mostrados o valor geral das vendas e o
valor da comissão que será paga ao vendedor.

b) o valor do objeto mais vendido e sua posição no vetor (não se preocupe com
empates).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0,"Portuguese");

    int objetos[5];
    float preco[5];

    for(int i = 0; i < 5; i++){
        printf("Digite a quantidade vendida do %dº objeto ", i+1);
        scanf("%d", &objetos[i]);

        printf("Digite o preço unitário do %dº objeto ", i+1);
        scanf("%f", &preco[i]);

        printf("\n");

    }

    int quantidadeVendida = 0;
    float valorTotal[5];
    float valorGeral;

    for(int i = 0; i < 5; i++){
        quantidadeVendida += objetos[i];

        valorTotal[i] = preco[i] * objetos[i];
        valorGeral += valorTotal[i];
    }

    //alternativa A

    printf("\n________ RELATÓRIO ________\n");
    printf("Quantidade vendida..........%d objetos", quantidadeVendida);

    for(int i = 0; i < 5; i++){
        printf("\nValor unitario do objeto %d é %.2f  -------------- Valor total é %.2f ", i+1, preco[i], valorTotal[i]);
    }

    printf("\n\nValor Geral das vendas é: %.2f", valorGeral);

    float comissao = valorGeral * 0.05;

    printf("\n\nComissao é: %.2f", comissao);

    int maisVendido, indiceVetor;

    for(int i = 0; i < 5; i++){
        if(objetos[i] > maisVendido){
            maisVendido = objetos[i];
            indiceVetor = i;
        }
    }

    printf("\n\nO objeto mais vendido foi o %d", objetos[indiceVetor + 1]);

    return 0;
}
