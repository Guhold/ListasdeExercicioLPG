#include <stdio.h>
#include <stdlib.h>

void troca_valor(float *x, float *y);


int main(){
    float numero1, numero2;

    printf("Digite dois numeros: ");
    scanf("%f%f", &numero1, &numero2);

    troca_valor(&numero1, &numero2);
}

void troca_valor(float *x, float *y){
    printf("Valor de x: %.2f\nValor de y: %.2f\n", *x, *y);

    float *temp;

    temp = x;
    x = y;
    y = temp;

    printf("Novo valor de x: %.2f\nNovo valor de y: %.2f\n", *x, *y);
}