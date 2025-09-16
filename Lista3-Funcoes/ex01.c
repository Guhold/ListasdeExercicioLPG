#include <stdio.h>
#include <stdlib.h>

int tipo_triangulo(float a, float b, float c);

int main(){
    float ladoA, ladoB, ladoC;
    int resultado;
    printf("Digite os 3 lados do triangulo: ");
    scanf("%f%f%f", &ladoA, &ladoB, &ladoC);

    resultado = tipo_triangulo(ladoA, ladoB, ladoC);
    
    switch (resultado){
        case 1:
            printf("Triangulo Equilatero\n");
            break;
        case 2:
            printf("Triangulo Isosceles\n");
            break;
        case 3:
            printf("Triangulo Escaleno\n");
            break;
        default:
            printf("Nao forma um triangulo\n");
    }
}

int tipo_triangulo(float a, float b, float c){
    if(a < b + c && b < a + c && c < a + b){
        if(a == b && b == c){
            return 1;
        } else if(a == b || b == c || a == c){
            return 2;
        } else {
            return 3;
        }
    } else {
        return 0;   
    }
}