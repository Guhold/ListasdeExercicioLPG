#include <stdio.h>
#include <stdlib.h>

double cosseno(int termosDaSerie, double x);

int main() {
    int termosDaSerie;
    double x;

    printf ("Digite o valor de x (radianos) e a quantidade de termos da serie: ");
    scanf ("%lf%d", &x, &termosDaSerie);

    double resultado = cosseno(termosDaSerie, x);
    printf ("Cosseno aproximado = %.5lf", resultado);

    return 0;
}

double cosseno(int termosDaSerie, double x){
    double somatorio = 0;
    double termo = 1;

    for (int i = 0; i < termosDaSerie; i++){
        somatorio += termo;

        termo *= (-1 * x * x)/((2*i + 1)*(2*i + 2));
    }

    return somatorio;
}