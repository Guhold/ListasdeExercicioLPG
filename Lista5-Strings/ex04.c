#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int palindrome (char str[]);

int main(){
    char string[MAX];
    int resultado;

    printf ("Digite uma string: ");
    fgets(string, MAX, stdin);

    resultado = palindrome(string);

    if (!resultado){
        printf("A string nao e um palindromo\n");
        return 0;
    }
    printf("A string e um palindromo\n");
}

int palindrome (char str[]){
    int i = 0, j = strlen(str) - 2;
    for (i, j; i < j; i++, j--){
        if (str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}