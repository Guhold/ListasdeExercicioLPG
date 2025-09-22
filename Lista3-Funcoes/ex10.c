#include <stdio.h>
#include <stdlib.h>

double serie_eulerIterativa(int n);
double serie_eulerRecursiva(int n);
int fat(int n);

int main(){
    int termosSerie;
    double resultadoIterativa, resultadoRecursiva;

    printf("Digite o numero de termos da serie: ");
    scanf("%d", &termosSerie);

    resultadoIterativa = serie_eulerIterativa(termosSerie);
    resultadoRecursiva = serie_eulerRecursiva(termosSerie);

    printf("Resultado (iterativa): %.6f\n", resultadoIterativa);
    printf("Resultado (recursiva): %.6f\n", resultadoRecursiva);
}

int fat(int n){
    if(n == 0) return 1;
    return n * fat(n-1);
}

double serie_eulerIterativa(int n){
    double somatorio = 0.;

    for(int i = 0; i < n; i++){
        somatorio += 1.0 / fat(i);
    }

    return somatorio;
}

double serie_eulerRecursiva(int n){
    if(n == 0) return 1.0;
    return (1.0 / fat(n)) + serie_eulerRecursiva(n-1);
}