#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

int str2int (char str[]);

int main(){
    char string[MAX];
    int resultado;

    printf ("Digite uma string: ");
    fgets(string, MAX, stdin);

    for (int i = 0; string[i] != '\n'; i++){
        if (string[i] < '0' || string[i] > '9'){
            printf ("A string nao e composta apenas por digitos\n");
            return 0;
        }
    }

    resultado = str2int(string);

    printf ("A string convertida para inteiro e: %d\n", resultado);
}

int str2int (char str[]){
    int valorInteiro = 0;
    
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '\n') break;
        if (str[i] < '0' || str[i] > '9'){
            return 0;
        }
        valorInteiro = valorInteiro * 10 + (str[i] - '0');  
    }

    return valorInteiro;
}