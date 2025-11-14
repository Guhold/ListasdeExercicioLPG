#include <stdio.h>
#include <stdlib.h>
float pi = 3.141593;

void calcula_circulo(float raio, float *pPerimetro, float *pArea);

int main(){
    float raio, perimetro, area;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    calcula_circulo(raio, &perimetro, &area);

    printf ("Perimetro: %.2f\nArea: %.2f\n", perimetro, area);
}

void calcula_circulo(float raio, float *pPerimetro, float *pArea){
    *pPerimetro = 2 * pi * raio;
    *pArea = pi * raio * raio;
}