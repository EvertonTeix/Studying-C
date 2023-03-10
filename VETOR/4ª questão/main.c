/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa cinco
tipos de objetos. O vendedor recebe, mensalmente, sal?rio de R$ 1.100,00, acrescido de 5%
do valor total de suas vendas. O valor unit?rio dos objetos deve ser
informado e armazenado em um vetor; a quantidade vendida de cada pe?a deve
ficar em outro vetor, mas na mesma posi??o. Crie um programa que receba os pre?os e
as quantidades vendidas, armazenando-os em seus respectivos vetores (ambos
com tamanho cinco). Depois, determine e mostre:

a) um relat?rio contendo: quantidade vendida, valor unit?rio e valor total de
cada objeto. Ao final, dever?o ser mostrados o valor geral das vendas e o
valor da comiss?o que ser? paga ao vendedor.

b) o valor do objeto mais vendido e sua posi??o no vetor (n?o se preocupe com
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
        printf("Digite a quantidade vendida do %d? objeto ", i+1);
        scanf("%d", &objetos[i]);

        printf("Digite o pre?o unit?rio do %d? objeto ", i+1);
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

    printf("\n________ RELAT?RIO ________\n");
    printf("Quantidade vendida..........%d objetos", quantidadeVendida);

    for(int i = 0; i < 5; i++){
        printf("\nValor unitario do objeto %d ? %.2f  -------------- Valor total ? %.2f ", i+1, preco[i], valorTotal[i]);
    }

    printf("\n\nValor Geral das vendas ?: %.2f", valorGeral);

    float comissao = valorGeral * 0.05;

    printf("\n\nComissao ?: %.2f", comissao);

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
