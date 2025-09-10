#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    /*
    QUESTÃO: Fazer um programa que leia um conjunto de idades de pessoas.
    O final do conjunto de valores é conhecido através do valor -1.
    Calcule e escreva a idade média deste conjunto.
    */

    float idadeMedia = 0, input; //declaração de variáveis de controle

    for (int i = 4; i > -1; i--) //enquanto i for maior que -1, decrementa i-1
    {
        printf("Insira a idade da %i° pessoa: ", (i-5)*-1); //calcula para exibir um valor que o usuário possa entender
        scanf("%f", &input); //recebe a entrada de dados
        idadeMedia += input; //soma a entrada de dados com o total
    }

    printf("Idade média: %.1f", idadeMedia/5); //faz o calculo da média e exibe na tela

    return 0;
}