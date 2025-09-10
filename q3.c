#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    /*
    QUESTÃO:
    Elaborar um programa que apresente no final o 
    somatório dos valores pares existentes entre 1 e 500.
    */
    int total = 0;
    
    printf("Números pares positivos no intervalo de 1 a 500:\n");

    for (int i = 2; i <= 500; i++) //se o i for menor ou igual a 500, incrementar i+1
    {
        if (i % 2 == 0){ //se i for par
            printf("%i\n", i); //mostra na tela
            total += i; //soma o valor par com o total
        }
    }
    printf("Somatório dos números pares positivos no intervalo de 1 a 500:\n%i", total);
    return 0;
}