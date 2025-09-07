#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fat(int n);

int main(){
    int termosDaSerie, x;
    double resultado;

    printf ("Digite o valor de x e a quantidade de termos da serie: ");
    scanf ("%d%d", &x, &termosDaSerie);

    for (double i = 0; i < termosDaSerie; i++){
        resultado += pow(x, i)/fat(i);
    }

    printf ("O resultado da serie de taylor para x = %d e %d termos resulta em %.5lf", x, termosDaSerie, resultado);
}

int fat(int n){
    int resultado_fatorial = 1;

    while (n > 1){
        resultado_fatorial *= n;
        n--;
    }
    return resultado_fatorial;
}
