#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void substring (char str[], int ini, int n, char sub[]);

int main(){
    int inicio, tamanhoString;
    printf("Digite o tamanho da string de saida e o ponto de partida: ");
    scanf("%d%d", &tamanhoString, &inicio);
    getchar();
    char stringEntrada[MAX], stringSaida[tamanhoString+1];
    printf("Digite uma string: ");
    fgets(stringEntrada, MAX, stdin);

    substring(stringEntrada, inicio, tamanhoString, stringSaida);

    printf("%s", stringSaida);

}

void substring (char str[], int ini, int n, char sub[]){
    int strlen = 0, i = 0;
    for (strlen; str[strlen] != '\0'; strlen++);

    if (ini > strlen){
        sub[0] = '\0';
    }

    for (ini; str[ini] != '\0'; ini++){
        if (str[ini] == '\0'){
            break;
        }
        if (n == 0){
            break;
        }
        sub[i] = str[ini];
        i++;
        n--;
    }

    sub[i] = '\0';
}