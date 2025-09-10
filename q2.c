#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    /*
    QUESTÃO: Exibir o produto dos números inteiros positivos no intervalo de um a cem.
    */
    int produto = 1, input; //variaveis de controle

    printf("Insira um número positivo qualquer: ");
    scanf("%i", &input); //recebe valor a multiplicar pelo resto

    if (input > 0) //se o valor for positivo
        for (int i = 1; i <= 100; i++) //se i for menor que 100, então incrementa i+1
        {
            printf("%i x %i = %i\n", input, i, input * i); //imprime tabuada dos produtos do número
        }
    
    return 0;
}