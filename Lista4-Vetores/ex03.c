#include <stdio.h>
#include <stdlib.h>

int isPrime(int n);
int soma_primos(int v[], int n);

int main(){
    int tamanhoVetor, resultado;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];

    resultado = soma_primos(vetor, tamanhoVetor);
    printf("Soma dos numeros primos no vetor = %d", resultado);
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

int soma_primos(int v[], int n){
    int somatorio = 0;
    printf("Digite os elementos do vetor: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
        if(isPrime(v[i])){
            somatorio += v[i];
        }
    }
    return somatorio;
}