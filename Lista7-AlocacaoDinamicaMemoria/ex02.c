#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor( char *s, int n );

int main(){
    int tamanhoString, numRepeticoes;
    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanhoString);

    char string[tamanhoString];

    printf("Digite a string: ");
    scanf("%s", string);

    printf("Digite quantas vezes voce quer repetir a string: ");
    scanf("%d", &numRepeticoes);
    char *stringRepetida = repetidor(string, numRepeticoes);

    printf("%s", stringRepetida);

    free (stringRepetida);
}

char *repetidor( char *s, int n ){
    char *stringRepetida = malloc ((strlen(s) * n) + 1);
    int tamanhoString = strlen(s);
    int i;

    for (i = 0; i < n*tamanhoString;){
        for (int j = 0; j < tamanhoString; j++){
            stringRepetida[i] = s[j];
            i++;
        }
    }
    stringRepetida[i] = '\0';
    
    
    return stringRepetida;
}