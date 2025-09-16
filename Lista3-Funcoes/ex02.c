#include <stdio.h>
#include <stdlib.h>

int maiorValor(int a, int b, int c);

int main(){
    int valorA, valorB, valorC, resultado;
    printf("Digite 3 valoreros inteiros: ");
    scanf("%d%d%d", &valorA, &valorB, &valorC);

    resultado = maiorValor (valorA, valorB, valorC);

    printf("O maior valor e: %d\n", resultado);
}

int maiorValor(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    } else if(b >= a && b >= c){
        return b;
    } else {
        return c;
    }
}