#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    /*
    QUESTÃO: Fazer um programa que leia 20 idades de pessoas.
    Calcule e escreva a idade média deste grupo.
    */
    float idadeMedia = 0, input; //declaração de variáveis de controle

    for (int i = 0; i < 20; i++) // enquanto i for menor que 20, incrementa i+1
    {
        printf("Insira a idade da %i° pessoa: ", i+1);
        scanf("%f", &input); //recebe a entrada de dados
        idadeMedia += input; //soma idadeMedia com a entrada de dados
    }

    printf("Idade média: %.1f", idadeMedia/20); //faz o cálculo da média e imprime o resultado

    return 0;
}