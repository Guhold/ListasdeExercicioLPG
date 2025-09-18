#include <stdio.h>
#include <stdlib.h>

double harmonica_iterativa(int final);
double harmonica_recursiva(int final);

int main(){
    int final;
    double resultado_iterativa, resultado_recursiva;
    printf("Digite um valor final: ");
    scanf("%d", &final);

    resultado_iterativa = harmonica_iterativa(final);
    resultado_recursiva = harmonica_recursiva(final);

    printf("Resultado iterativa: %.2f\n", resultado_iterativa);
    printf("Resultado recursiva: %.2f\n", resultado_recursiva);
}

double harmonica_iterativa(int final){
    double somatorio = 0.;

    for (int i = 1; i <= final; i++){
        somatorio += 1.0 / i;
    }

    return somatorio;
}

double harmonica_recursiva(int final){
    if (final == 1){
        return 1;
    } else{
        return (1.0 / final) + harmonica_recursiva(final - 1);
    }
}