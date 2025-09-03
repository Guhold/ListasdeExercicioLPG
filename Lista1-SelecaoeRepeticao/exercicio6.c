#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorInicio, valorParada, valorSoma = 0;
    printf("Digite os valores de inicio e de parada: ");
    scanf("%d%d", &valorInicio, &valorParada);

    if (valorInicio == valorParada){
        printf("A soma dos impares entre esses dois valores = 0");
    }

    if (valorInicio < valorParada){
        valorInicio++;
        while (valorInicio != valorParada){
            if (valorInicio%2 != 0){
                valorSoma += valorInicio;
            }
            valorInicio++;
        }
    }

    if (valorInicio > valorParada){
        valorInicio--;
        while (valorInicio != valorParada){
            if (valorInicio%2 != 0){
                valorSoma += valorInicio;
            }
            valorInicio--;
        }
    }

    printf("A soma dos impares entre esses dois valores = %d", valorSoma);
}