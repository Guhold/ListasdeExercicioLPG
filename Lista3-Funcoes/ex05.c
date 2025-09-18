#include <stdio.h>
#include <stdlib.h>

int isPrime(int n);
int* listPrimes(int k, int n, int resultado[]);

int main(){
    int numero1, qtde;
    printf("Digite o numero inicial e a quantidade de numeros primos a serem listados: ");
    scanf("%d%d", &numero1, &qtde);
    int resultado[qtde];

    listPrimes(numero1, qtde, resultado);

    printf("Os %d numeros primos apos %d sao: ", qtde, numero1);
    for(int i = 0; i < qtde; i++){
        printf("%d ", resultado[i]);
    }
}

int isPrime(int n){
    if(n <= 1) return 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int* listPrimes(int k, int n, int resultado[]){
    int contador = 0, numero = k + 1;

    while (contador < n){
        if(isPrime(numero)){
            resultado[contador] = numero;
            contador++;
        }
        numero++;
    }

    return resultado;
}