#include <stdio.h>
#include <stdlib.h>

int fat(int n);
double serie_e (int termos);

int main(){
    int termosDaSerie;
    double resultado;

    printf ("Digite quantos termos voce quer na serie: ");
    scanf ("%d", &termosDaSerie);

    resultado = serie_e(termosDaSerie);

    printf ("O resultado da serie de e resulta em %.2lf", resultado);
}

int fat(int n){
    int resultado_fatorial = 1;

    while (n > 1){
        resultado_fatorial *= n;
        n--;
    }
    return resultado_fatorial;
}

double serie_e (int termos){
    double somatorio = 0;
    for (int i = 0; i < termos; i++){
        somatorio += 1.0/fat(i);
    }
    return somatorio;
}