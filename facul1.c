#include <stdio.h> //biblioteca dos c�digos, printf e scanf
int main()  //fun��o//bloco principal
{ //inicio
    int n; // inteiro
    float x; // real
    char LETRA; // caracter
    char PALAVRA[10]; // array cadeia

    printf("Informe um numero: "); //Escreva(saida de dados)
    scanf("%i",&n); //Leia(N) %d ou %i � o formato, portanto esse � o inteiro e o outro �  o nome
    printf("\nDecimal %d" ,n); // tipos de mostrar numeros
    printf("\nOctal %o" ,n); // tipos de mostrar numeros
    printf("\nHexadecimal %x" ,n); // tipos de mostrar numeros

    return 0; //retorna 0 para a fun��o principal (main) q � falso e 1 � verdadeiro
} //fim
