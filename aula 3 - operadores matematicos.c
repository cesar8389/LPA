#include <stdio.h>
#include <stdlib.h>

int main () 
{
    /* 
    Operadores matematicos
    Soma: +
    Subtra��o: -
    Multiplica��o: *
    Divis�o: /
    Resto de divis�o: %
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
    Operadores de atribui��o aritmetica
    Incremento em uma unidade: ++
    Decrementeo em uma unidade: --
    Incremento gen�rico: +=
    Decremento gen�rico: -=
    Atribuicao com multiplicacao: *=
    Atribuicao com divisao: /=
    */
    
    system("PAUSE");
    return 0;
}
