#include <stdio.h>
#include <stdlib.h>

void busca_todos(int v[], int n, int chave, int indices[]);

int main(){
    int tamanhoVetor, chave;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor], resultado[tamanhoVetor];

    printf("Digite os elementos do vetor: ");
    for(int i = 0; i < tamanhoVetor; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite a chave de busca: ");
    scanf("%d", &chave);

    busca_todos(vetor, tamanhoVetor, chave, resultado);

    printf("Indices encontrados: ");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("%d ", resultado[i]);
    }

}

void busca_todos(int v[], int n, int chave, int indices[]){
    int contador = 0;

    for (int i = 0; i < n; i++){
        if(v[i] == chave){
            indices[contador] = i;
            contador++;
        }
    }

    for (int i = contador; i < n; i++){
        indices[i] = -1;
    }
}