#include <stdio.h>
#include <stdlib.h>

int fibo(int n);

int main(){
    int termosSequencia;
    printf("Digite a quantidade de termos da sequencia de Fibonacci a serem exibidos: ");
    scanf("%d", &termosSequencia);
    int resultado[termosSequencia];

    for (int i = 0; i < termosSequencia; i++){
        resultado[i] = fibo(i);
    }

    printf("Os %d primeiros termos da sequencia de Fibonacci sao: ", termosSequencia);
    for (int i = 0; i < termosSequencia; i++){
        printf("%d ", resultado[i]);
    }
}

int fibo(int n){
    if(n == 0 || n == 1) return 1;
    int a = 1, b = 1, temp;

    for (int i = 2; i <= n; i++){
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}