#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void capitaliza (char str[]);

int main(){
    char string[MAX];
    printf ("Digite uma string: ");
    fgets (string, MAX, stdin);

    capitaliza(string);

    printf("String capitalizada: %s\n", string);
}

void capitaliza (char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
}