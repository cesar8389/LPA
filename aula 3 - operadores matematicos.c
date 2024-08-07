#include <stdio.h>
#include <stdlib.h>

int main () 
{
    /* 
    Operadores matematicos
    Soma: +
    Subtração: -
    Multiplicação: *
    Divisão: /
    Resto de divisão: %
    */
    
    int A, B, soma, sub, mult, div;
    printf("Digite o primeiro valor:\n");
    scanf("%d",&A);
    printf("Digite o segundo valor:\n");
    scanf("%d",&B);
    
    soma = A + B;
    sub = A - B;
    mult = A * B;
    div = A / B;
    
    printf("Resultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %d\n", div);
    
    /*
    Operadores de atribuição aritmetica
    Incremento em uma unidade: ++
    Decrementeo em uma unidade: --
    Incremento genérico: +=
    Decremento genérico: -=
    Atribuicao com multiplicacao: *=
    Atribuicao com divisao: /=
    */
    
    system("PAUSE");
    return 0;
}
