#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    /*
    QUESTÃO: Fazer um programa que leia um conjunto de alturas de pessoas.
    O final do conjunto de valores é conhecido através do valor zero.
    Escreva a menor altura deste conjunto.
    */
    int tamVetor;

    printf("Quantas alturas você deseja receber?: ");
    scanf("%i", &tamVetor);//usuario escolhe tamanho do vetor
    
    int alturas[tamVetor], menorAltura;

    for (int pos = 0; pos < tamVetor; pos++)
    {
        printf("Insira a %i° altura em centímetros: ", pos+1); //recebe a altura na posição 'pos'
        scanf("%i", &alturas[pos]);

        for (int  i = 0; i < pos; i++) //confere a cada ciclo qual o menor valor
        {
            //se altura na posição 'i' for menor que a última altura inserida
            if (alturas[i] < alturas[pos])
            {
                menorAltura = alturas[i]; //PROBLEMAS AO ESCOLHER A MENOR ALTURA
            }
        }
        
    }

    printf("\nMenor altura: %i", menorAltura);

    return 0;
}