#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void apagar(char c, char str[]);;

int main(){
    char caractere, string[MAX];
    printf("Digite uma string: ");
    fgets(string, MAX, stdin);
    printf("Digite um caractere para apagar na string: ");
    scanf("%c", &caractere);

    apagar(caractere, string);

    printf("%s", string);
}

void apagar(char c, char str[]){
    int i, j = 0;

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] != c){
            str[j] = str[i];
            j++;;
        }
    }

    str[j] = '\0';
}