#include <stdio.h>
#include <stdlib.h>

void printVetor(int v[], int tam);
int *alocaVetor(int *tamVetor);
int *uniao(int *v1, int n1, int *v2, int n2, int *p3);

int main(){
    int tamanhoVetor1, tamanhoVetor2, tamanhoVetor3;
    int *vetor1 = alocaVetor(&tamanhoVetor1), *vetor2 = alocaVetor(&tamanhoVetor2);

    int *vetor3 = uniao(vetor1, tamanhoVetor1, vetor2, tamanhoVetor2, &tamanhoVetor3);

    printf("Vetor 1: ");
    printVetor(vetor1, tamanhoVetor1);
    printf("Vetor 2: ");
    printVetor(vetor2, tamanhoVetor2);
    printf("Vetor 3: ");
    printVetor(vetor3, tamanhoVetor3);

    free(vetor1);
    free(vetor2);
    free(vetor3);
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

int *uniao(int *v1, int n1, int *v2, int n2, int *p3){
    int *p = NULL;
    int contp3 = 0, valor;

    for (int j = 0; j < n1; j++){
        valor = v1[j];
        int existe = 0;

        for (int k = 0; k < contp3; k++){
            if (p[k] == valor){
                existe = 1;
                break;
            }
        }

        if (!existe){
            p = realloc(p, sizeof(int) * (contp3 + 1));
            p[contp3] = valor;
            contp3++;
        }
    }

    for (int i = 0; i < n2; i++){
        valor = v2[i];
        int existe = 0;

        for (int k = 0; k < contp3; k++){
            if (p[k] == valor){
                existe = 1;
                break;
            }
        }

        if (!existe){
            p = realloc(p, sizeof(int) * (contp3 + 1));
            p[contp3] = valor;
            contp3++;
        }
    }

    (*p3) = contp3;
    return p;
}