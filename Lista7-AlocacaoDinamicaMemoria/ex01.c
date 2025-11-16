#include <stdio.h>
#include <stdlib.h>

float *clone( float *v, int n );

int main(){
    int tamanhoVetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    float vetor[tamanhoVetor];

    printf("Digite valores para o vetor: ");
    for (int i = 0; i < tamanhoVetor; i++){
        scanf("%f", &vetor[i]);
    }

    float *vetorClonado = clone(vetor, tamanhoVetor);

    printf("Vetor Original: ");

    for (int i = 0; i < tamanhoVetor; i++){
        printf("%.2f ", vetor[i]);
    }

    printf("Vetor Clonado: ");

    for (int i = 0; i < tamanhoVetor; i++){
        printf("%.2f ", vetorClonado[i]);
    }

    free(vetorClonado);
}

float *clone( float *v, int n ){
    float *p;
    p = malloc (sizeof(float) * n);

    for (int i = 0; i < n; i++){
        p[i] = v[i];
    }

    return p;
}