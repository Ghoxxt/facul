#include <stdio.h> //biblioteca dos códigos, printf e scanf
int main()  //função//bloco principal
{ //inicio
    int n; // inteiro
    float x; // real
    char LETRA; // caracter
    char PALAVRA[10]; // array cadeia

    printf("Informe um numero: "); //Escreva(saida de dados)
    scanf("%i",&n); //Leia(N) %d ou %i é o formato, portanto esse é o inteiro e o outro é  o nome
    printf("\nDecimal %d" ,n); // tipos de mostrar numeros
    printf("\nOctal %o" ,n); // tipos de mostrar numeros
    printf("\nHexadecimal %x" ,n); // tipos de mostrar numeros

    return 0; //retorna 0 para a função principal (main) q é falso e 1 é verdadeiro
} //fim
