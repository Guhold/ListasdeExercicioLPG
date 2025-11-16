#include <stdio.h>
#include <stdlib.h>

float *alocaVetor(int *tamVetor);
float *mediaSup(float *v, int tamVetor, int *tamFiltrado);

int main(){
    int tamanhoVetor;
    float *vetor = alocaVetor(&tamanhoVetor);

    int tamanhoFiltrado;
    float *vetorComMedia = mediaSup(vetor, tamanhoVetor, &tamanhoFiltrado);

    printf("Vetor com valores maiores ou iguais a media: ");
    for (int i = 0; i < tamanhoFiltrado; i++){
        printf("%.2f ", vetorComMedia[i]);
    }

    free(vetor);
    free(vetorComMedia);
}

float *alocaVetor(int *tamVetor){
    float *p = NULL;
    float valor;
    *tamVetor = 0;

    printf("Digite o vetor (Use -1 para encerrar): ");
    
    while (1){
        scanf ("%f", &valor);

        if (valor == -1){
            break;
        }

        p = realloc (p, (*tamVetor + 1)*sizeof(float));

        p[(*tamVetor)] = valor;
        (*tamVetor)++;
    }

    return p;
}

float *mediaSup(float *v, int tamVetor, int *tamFiltrado){
    float *vetorMedia = NULL;
    int tamanhoVetorOriginal = tamVetor;
    float media = 0;

    for (int i = 0; i < tamanhoVetorOriginal; i++){
        media += v[i];
    }

    media = media / tamanhoVetorOriginal;

    int j = 0;
    for (int i = 0; i < tamanhoVetorOriginal; i++){
        if (v[i] >= media){
            vetorMedia = realloc (vetorMedia, (j+1)*sizeof(float));
            vetorMedia[j] = v[i];
            j++;
        }
    }

    *tamFiltrado = j;

    return vetorMedia;
}