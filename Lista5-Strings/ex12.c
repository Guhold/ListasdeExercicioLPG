#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int compara(char str1[], char str2[]);

int main(){
    char string1[MAX], string2[MAX];
    int resultado;
    printf ("Digite a primeira string: ");
    fgets(string1, MAX, stdin);
    printf ("Digite a segunda string: ");
    fgets(string2, MAX, stdin);

    resultado = compara(string1, string2);

    if (!resultado){
        printf ("As duas string sao iguais.");
        return 0;
    }

    printf ("As duas string sao diferentes.");
    return 0;
}

int compara(char str1[], char str2[]){
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){
        if (str1[i] == str2[i]){
            continue;
        }

        if (str1[i] < str2[i]){
            return -1;
        }

        return 1;
    }

    return 0;
}