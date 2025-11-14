#include <stdio.h>
#include <stdlib.h>

void max_min(int vet[], int tam, int *pMin, int *pMax);

int main(){
    int tamanhoVetor, valorMax, valorMin;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];

    printf("Digite os valores do vetor: ");
    for (int i = 0; i < tamanhoVetor; i++){
        scanf("%d", (vetor + i));
    }

    max_min(vetor, tamanhoVetor, &valorMin, &valorMax);

    printf("Menor valor no vetor: %d\nMaior valor no vetor: %d\n", valorMin, valorMax);
}

void max_min(int vet[], int tam, int *pMin, int *pMax){
    (*pMin) = vet[0], (*pMax) = vet[0];

    for (int i = 0; i < tam; i++){
        if (vet[i] > (*pMax)){
            (*pMax) = vet[i];
        }
        if (vet[i] < (*pMin)){
            (*pMin) = vet[i];
        }
    }
}