#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    /*
    QUESTÃO:
    Entrar com dois valores via teclado, onde o segundo deverá
    ser maior que o primeiro. Caso contrário solicitar novamente
    apenas o segundo valor.
    */
    int v1, v2;

    printf("Insira ambos valores (o segundo tem que obrigatóriamente ser maior que o primeiro)\n\t#1: ");
    scanf("%i", &v1); //recebe primeiro valor
    printf("\t#2: ");
    scanf("%i", &v2); //recebe segundo valor

    while (v2 <= v1) //enquanto v2 não for maior que v1
    {
        printf("O segundo valor é menor que o primeiro.\n");
        printf("Por favor, insira um número maior: ");
        scanf("%i", &v2); //recebe v2
    }

    return 0;
}