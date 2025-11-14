#include <stdio.h>
#include <stdlib.h>

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ);

int main(){
    float matriz[3][4], valorMin;
    int linhaMin, colunaMin;

    printf("Digite os valores da matriz: \n");
    for (int i = 0; i < 3; i++){
        printf("Digite a %da linha: ", i+1);
        for (int j = 0; j < 4; j++){
            scanf("%f", matriz[i] + j);
        }
    }

    min_matriz(matriz, &valorMin, &linhaMin, &colunaMin);

    printf("Menor valor na matriz: %.2f\nLinha: %d Coluna: %d\n", valorMin, linhaMin, colunaMin);
}

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ){
    (*pMin) = mat[0][0], (*pI) = 0, (*pJ) = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if (mat[i][j] < (*pMin)){
                (*pMin) = mat[i][j];
                (*pI) = i+1;
                (*pJ) = j+1;
            }
        }
    }
}