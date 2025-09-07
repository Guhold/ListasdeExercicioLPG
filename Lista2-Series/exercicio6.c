#include <stdio.h>
#include <stdlib.h>

double seno(int termosDaSerie, double x);

int main() {
    int termosDaSerie;
    double x;

    printf ("Digite o valor de x (radianos) e a quantidade de termos da serie: ");
    scanf ("%lf%d", &x, &termosDaSerie);

    double resultado = seno(termosDaSerie, x);
    printf ("Seno aproximado = %.5lf", resultado);

    return 0;
}

double seno(int termosDaSerie, double x){
    double somatorio = 0;
    double termo = x;

    for (int i = 0; i < termosDaSerie; i++){
        somatorio += termo;

        termo *= (-1 * x * x)/((2*i + 2)*(2*i + 3));
    }

    return somatorio;
}