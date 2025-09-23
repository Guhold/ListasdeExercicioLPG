#include <stdio.h>
#include <stdlib.h>

int busca_seq_rec(int v[], int n, int chave);

int main(){
    int tamanhoVetor, chave, resultado;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];

    printf("Digite os elementos do vetor: ");
    for(int i = 0; i < tamanhoVetor; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Digite a chave de busca: ");
    scanf("%d", &chave);

    resultado = busca_seq_rec(vetor, tamanhoVetor, chave);

    if(resultado != -1){
        printf("Chave encontrada no indice: %d\n", resultado);
    } else {
        printf("Chave nao encontrada\n");
    }
}

int busca_seq_rec(int v[], int n, int chave){
    if(n < 0){
        return -1;
    }
    if(v[n-1] == chave){
        return n-1;
    }
    return busca_seq_rec(v, n-1, chave);
}