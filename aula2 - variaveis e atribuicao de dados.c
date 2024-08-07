#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*
    Tipos de dados
    char          8 bits    -127 a 127
    short int     16 bits   -32.768 a 32.767
    long int      32 bits   -2.147.483.648 a 2.147.483.647
    float         32 bits   3,4*10^-38 a 3,4*10^38
    double        64 bits   1,7*10^-308 a 1,7*10^308
    bool          8 bits    0 ou 1
    */
    int numero = 2147483647;
    printf("%d\n", numero);
    
    #define anoNascimento 1994
    printf("%d\n", anoNascimento);
    
    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";
    
    printf("Digite a idade\n");
    scanf("%d", &idade);
    
    printf("Digite a altura\n");
    scanf("%f", &altura);
    
    printf("Digite o nome\n");
    scanf("%s", &nome);
    
    printf("Dados informados:\n");
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Nome: %s\n", nome);
    
    system("PAUSE");
    return 0;
}
