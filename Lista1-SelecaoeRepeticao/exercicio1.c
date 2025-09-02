#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, y;
    printf("Digite a coordenada (x y): ");
    scanf("%f%f", &x, &y);

    if (x == 0 && y == 0){
        printf("O ponto esta na origem\n");
        return 0;
    } if (x == 0){
        printf ("O ponto esta no eixo x\n");
        return 0;
    } if (y == 0){
        printf ("O ponto esta no eixo y\n");
        return 0;
    }
    if (x > 0){
        if (y > 0) {
            printf ("O ponto esta no primeiro quadrante\n");
        } else {
            printf ("O ponto esta no quarto quadrante\n");
        }
        return 0;
    }
    else {
        if (y > 0) {
            printf("O ponto esta no segundo quadrante\n");
        } else {
            printf("O ponto esta no terceiro quadrante\n");
        }
        return 0;
    }
}