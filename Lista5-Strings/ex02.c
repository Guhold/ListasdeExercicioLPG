#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int procuraQtdeCaractere(char string[], char caractere);

int main(){
    char stringProcurada[MAX], caractereDesejado;
    int resultado;
    printf("Digite a string que voce quer fazer a busca: ");
    fgets(stringProcurada, MAX, stdin);
    printf("Digite o caractere que voce quer buscar na string: ");
    scanf("%c", &caractereDesejado);


    printf("Procurando o caractere %c na string: %s", caractereDesejado, stringProcurada);
    resultado = procuraQtdeCaractere(stringProcurada, caractereDesejado);

    if (!resultado){
        printf("Caractere nao encontrado na string\n");
        return 0;
    }
    printf("Caractere encontrado na string %d vezes\n", resultado);
    return 0;
}

int procuraQtdeCaractere(char string[], char caractere){
    int contador = 0;
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == caractere){
            contador++;
        }
    }

    if (contador){
        return contador;
    }
    return 0;
}