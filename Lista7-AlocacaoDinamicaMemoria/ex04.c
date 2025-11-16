#include <stdio.h>
#include <stdlib.h>

void printVetor(int v[], int tam);
int *alocaVetor(int *tamVetor);
void separaSinal(int *v, int tam, int **vp, int **vn, int *tampos, int *tamneg);

int main(){
    int tamanhoVetor, tamanhoPositivo, tamanhoNegativo;
    int *vetorPositivo = NULL, *vetorNegativo = NULL, *vetor = alocaVetor(&tamanhoVetor);

    separaSinal(vetor, tamanhoVetor, &vetorPositivo, &vetorNegativo, &tamanhoPositivo, &tamanhoNegativo);

    printf("Vetor Original: ");
    printVetor(vetor, tamanhoVetor);
    printf("Vetor Positivo: ");
    printVetor(vetorPositivo, tamanhoPositivo);
    printf("Vetor Negativo: ");
    printVetor(vetorNegativo, tamanhoNegativo);

    free(vetor);
    free(vetorPositivo);
    free(vetorNegativo);
}

void printVetor(int v[], int tam){
    for (int i = 0; i < tam; i++){
        if (i == tam-1){
            printf("%d", v[i]);
            continue;
        }
        printf("%d, ", v[i]);
    }
    printf("\n");
}

int *alocaVetor(int *tamVetor){
    int *p = NULL;
    int valor;
    *tamVetor = 0;

    printf("Digite valores inteiros para o vetor (Use 0 para encerrar): ");
    while(1){
        scanf("%d", &valor);

        if (valor == 0){
            break;
        }

        p = realloc (p, (*tamVetor+1)*sizeof(int));

        p[*tamVetor] = valor;
        (*tamVetor)++;
    }

    return p;
}

void separaSinal(int *v, int tam, int **vp, int **vn, int *tampos, int *tamneg){
    (*tampos) = 0, (*tamneg) = 0;
    for (int i = 0; i < tam; i++){
        if (v[i] > 0){
            *vp = realloc (*vp, ((*tampos)+1)*sizeof(int));
            (*vp)[(*tampos)] = v[i]; 
            (*tampos)++;
            continue;
        }
        *vn = realloc (*vn, ((*tamneg)+1)*sizeof(int));
        (*vn)[(*tamneg)] = v[i];
        (*tamneg)++;
    }
}