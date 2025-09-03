#include <stdio.h>
#include <stdlib.h>

int main(){
    int valoresPares = 0, valoresImpares = 0;
    int valoresPositivos = 0, valoresNegativos = 0;
    int qtdeValores;

    printf ("Digite quando valores voce vai querer escrever: ");
    scanf ("%d", &qtdeValores);

    int valores[qtdeValores];

    printf ("Digite os seus valores: ");
    for (int i = 0; i < qtdeValores; i++){
        scanf ("%d", &valores[i]);

        if (valores[i] == 0){
            valoresPares++;
            continue;
        }

        if (valores[i] > 0){
            valoresPositivos++;
        } else {
            valoresNegativos++;
        }

        if (valores[i]%2 == 0){
            valoresPares++;
        } else {
            valoresImpares++;
        }

    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", valoresPares, valoresImpares, valoresPositivos, valoresNegativos);
}