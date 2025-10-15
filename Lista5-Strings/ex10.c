#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void inverte (char str[]);

int main(){
    char string[MAX];
    printf ("Digite uma string: ");
    fgets (string, MAX, stdin);

    inverte (string);

    printf ("%s", string);
}

void inverte(char str[]){
    int j = 0;
    char temp;
    for (j; str[j] != '\n'; j++);
    j--;

    for (int i = 0; i < j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}