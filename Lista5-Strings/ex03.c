#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void concatena (char str1[], char str2[]);

int main(){
    char primeiraString[MAX], segundaString[MAX];

    printf("Digite a primeira string: ");
    fgets(primeiraString, MAX, stdin);
    printf("Digite a segunda string: ");
    fgets(segundaString, MAX, stdin);

    
    concatena (primeiraString, segundaString);

    printf("String concatenada: %s\n", primeiraString);
}

void concatena (char str1[], char str2[]){
    int i;
    for (i = 0; str1[i] != '\n'; i++);
    
    for (int j = 0; str2[j] != '\n'; j++){
        str1[i+j] = str2[j];
    }
}