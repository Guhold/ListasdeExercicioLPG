#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int allDigits (char str[]);

int main(){
    char string[MAX];
    int resultado;
    printf ("Digite uma string: ");
    fgets(string, MAX, stdin);

    resultado = allDigits(string);

    if (!resultado){
        printf("A string nao e composta apenas por digitos\n");
        return 0;
    }
    printf("A string e composta apenas por digitos\n");
}

int allDigits (char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '\n') continue;
        if (str[i] < '0' || str[i] > '9'){
            return 0;
        }
    }
    return 1; 
}