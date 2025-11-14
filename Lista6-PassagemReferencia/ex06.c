#include <stdio.h>
#include <stdlib.h>

void max_vetor(float vet[], int tam, float *pMax, int *pIndice);

int main(){
    int tamanhoVetor, indiceMax;
    float valorMax;

    printf("Digite o tamanho do vetor: ");
    scanf ("%d", &tamanhoVetor);

    float vetor[tamanhoVetor];

    printf("Digite os valores do vetor: ");
    for (int i = 0; i < tamanhoVetor; i++){
        scanf("%f", (vetor + i));
    }

    max_vetor(vetor, tamanhoVetor, &valorMax, &indiceMax);

    printf("Maior valor do vetor: %.2f\nIndice: %d", valorMax, indiceMax);
}

void max_vetor(float vet[], int tam, float *pMax, int *pIndice){
    (*pMax) = vet[0];

    for (int i = 0; i < tam; i++){
        if (vet[i] > (*pMax)){
            (*pMax) = vet[i];
            (*pIndice) = i;
        }
    }
}