#include <stdio.h>
#include <stdlib.h>

int compara(float a[], float b[], int n);

int main(){
    int tamanhoVetor, resultado;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    float vetor1[tamanhoVetor], vetor2[tamanhoVetor];

    printf("Digite os elementos do primeiro vetor:\n");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Elemento %d: ", i+1);
        scanf("%f", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Elemento %d: ", i+1);
        scanf("%f", &vetor2[i]);
    }

    resultado = compara(vetor1, vetor2, tamanhoVetor);

    if(resultado){
        printf("Os vetores sao iguais.\n");
    } else {
        printf("Os vetores sao diferentes.\n");
    }
}

int compara(float a[], float b[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}