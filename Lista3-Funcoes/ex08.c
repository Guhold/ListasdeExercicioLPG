#include <stdio.h>
#include <stdlib.h>

int soma_normal(int final);
int soma_recursiva(int final);

int main(){
    int final, resultado_normal, resultado_recursiva;
    printf("Digite um valor final: ");
    scanf("%d", &final);

    resultado_normal = soma_normal(final);
    resultado_recursiva = soma_recursiva(final);

    printf("Resultado normal: %d\n", resultado_normal);
    printf("Resultado recursiva: %d\n", resultado_recursiva);
}

int soma_normal(int final){
    int somatorio = 0;
    for (int i = 0; i <= final; i++){
        somatorio += i;
    }

    return somatorio;
}

int soma_recursiva(int final){
    if (final == 0){
        return 0;
    } else {
        return final + soma_recursiva(final - 1);
    }
}