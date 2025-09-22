#include <stdio.h>
#include <stdlib.h>

void fibonacci(int v[], int n);

int main(){
    int termosSequencia;
    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &termosSequencia);
    int vetorfibo[termosSequencia];

    fibonacci(vetorfibo, termosSequencia);
}

void fibonacci(int v[], int n){
    if (n == 0) return;
    if (n >= 1) v[0] = 1;
    if (n >= 2) v[1] = 1;

    for (int i = 2; i < n; i++){
        v[i] = v[i-1] + v[i-2];
    }

    printf("Os %d primeiros termos da sequencia de Fibonacci sao: ", n);
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}