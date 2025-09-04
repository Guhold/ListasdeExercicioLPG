#include <stdio.h>
#include <stdlib.h>

int main(){
    int numTestes;
    printf("Digite a quantidade de casos testados: ");
    scanf("%d", &numTestes);
    int resultados[numTestes] = {0};


    for (int i = 0; i < numTestes; i++){
        int valorInicio, valorParada, valorSoma = 0;
        printf("Digite os valores de inicio e de parada: ");
        scanf("%d%d", &valorInicio, &valorParada);

        if (valorInicio == valorParada){
            resultados[i] = 0;
            continue;
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
        resultados[i] = valorSoma;
    }

    for (int i = 0; i < numTestes; i++){
        printf ("%d\n", resultados[i]);
    }
}