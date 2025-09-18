#include <stdio.h>
#include <stdlib.h>

int soma_especial(int inicial, int multiplo, int termosSequencia);

int main(){
    int inicial, multiplo, termosSequencia;
    printf("Digite um multiplo e um valor inicial: ");
    scanf("%d%d", &multiplo, &inicial);
    printf("Digite a quantidade de termos da sequencia a serem exibidos: ");
    scanf("%d", &termosSequencia);

    int soma = soma_especial(inicial, multiplo, termosSequencia);
    printf("A soma dos %d primeiros termos da sequencia a partir de %d que sao multiplos de %d eh = %d", termosSequencia, inicial, multiplo, soma);
}

int soma_especial(int inicial, int multiplo, int termosSequencia){
    int somatorio = 0, contador = 0, numeroAtual = inicial;

    while (contador < termosSequencia){
        if (numeroAtual % multiplo == 0){
            somatorio += numeroAtual;
            contador++;
        }
        numeroAtual++;
    }

    return somatorio;
}