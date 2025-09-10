#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    /*
    QUESTÃO: Exibir a soma dos números positivos no intervalo de um a cem
    */
    int soma = 0, input; //variaveis de controle

    printf("Insira um número positivo qualquer: ");
    scanf("%i", &input); //recebe valor a somar pelo resto

    if (input > 0) //se o valor for positivo
        for (int i = 1; i <= 100; i++) //se i for menor que 100, então incrementa i+1
        {
            printf("%i + %i = %i\n", input, i, input + i); //imprime tabuada de soma do número
        }
    
    return 0;
}