#include <stdio.h>
#include <stdlib.h>

int soma_impares(int x, int y);

int main(){
    int numero1, numero2, resultado;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &numero1, &numero2);

    resultado = soma_impares(numero1, numero2);
    printf("A soma dos numeros impares entre %d e %d = %d\n", numero1, numero2, resultado);
}

int soma_impares(int x, int y){
    int soma = 0;
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for(int i = x+1; i < y; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }

    return soma;
}