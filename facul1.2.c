#include <stdio.h> //biblioteca dos códigos, printf e scanf
#include <string.h> // fflush
int main()  //função//bloco principal
{ //inicio
    int n; // inteiro
    float x; // real
    char LETRA; // caracter
    char PALAVRA[10]; // array cadeia

    printf("Informe um valor inteiro: "); //Escreva(saida de dados)
    scanf("%i",&n); //Leia(N) %d ou %i é o formato, portanto esse é o inteiro e o outro é  o nome da variavel

    printf("\n informe um numero com virgula: "); // tipos de mostrar numeros com virgula
    scanf("%f, &x");

    fflush(stdin); //limpa buffer do teclado

    printf("\n Informe uma letra: "); // tipos de mostrar letras
    scanf("%c , &LETRA");

    printf("\n Informe uma palavra"); // tipos de mostrar palavras
    scanf("%s" , &PALAVRA);

    return 0; //retorna 0 para a função principal (main) q é falso e 1 é verdadeiro
} //fim
