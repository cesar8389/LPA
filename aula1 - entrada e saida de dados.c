#include <stdio.h>
#include <stdlib.h>

int main () 
{
 /*
 Especificadores de formatos
 d ou i - Numeros inteiros em base decimal
 X - Numeros inteiros em base hexadecimal
 f - Numeros em ponto flutuante
 e - Números em anotação cientifica
 c - caracteres alfanumericos
 s - sequencia de caracteres alfanumericos
 .<num> - Especifica quantos digitos serão impressos após a virgula
 */
  printf("Ola, mundo! \3 \n");
  printf("%d de Agosto de %d\n", 6, 2024);
  printf("O valor de pi: %f\n", 3.141592653);
  printf("O valor de pi com apenas duas casas decimais: %.2f\n", 3.141592653);
  printf("Um unico caractere: %c\n", 'c');
  printf("Uma sequencia de caracteres: %s\n", "Eu amo programar");
 /*
 Sequencias de escape
 \a - Bip, alarme de sistema
 \b - Backspace
 \n - Qubra de linha
 \t - Tabulação horizontal
 \r - Retorna ao inicio da linha
 \0 - Caractere nulo
 \v - Tabulação vertical
 \\ - Caractere \\
 \' - Caractere '
 \" - Caractere "
 \? - Caractere ?
 \123 - Caractere relacionado ao código 123 em octal (ASCII)
 \X12 - Caractere relacionado ao código 12 em octal (ASCII)
 %% - Caractere %
 */
 

 
 system("PAUSE");
 return 0;
}
