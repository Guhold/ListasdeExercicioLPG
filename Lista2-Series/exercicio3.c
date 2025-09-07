#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double gregory_leibniz (int termosDaSerie);
double nilakantha (int termosDaSerie);

int main(){
    int termosDaSerie;
    double resultado_gregory, resultado_nilakantha;

    printf ("Digite quantos termos voce quer na serie: ");
    scanf ("%d", &termosDaSerie);

    resultado_gregory = gregory_leibniz(termosDaSerie);
    resultado_nilakantha = nilakantha(termosDaSerie);

    printf ("A serie de Gregory-Leibniz com %d termos resulta em %.5lf\n", termosDaSerie, resultado_gregory);
    printf ("A serie de Nilakantha com %d termos resulta em %.5lf\n", termosDaSerie, resultado_nilakantha);
}

double gregory_leibniz(int termosDaSerie){
    double somatorio = 0;
    for (int i = 0; i < termosDaSerie; i++){
        somatorio += pow(-1.0, i)/(2*i + 1);
    }
    return somatorio*4;
}

double nilakantha(int termosDaSerie){
    double somatorio = 0;
    for (int i = 1; i < termosDaSerie; i++){
        somatorio += pow(-1.0, i+1)/(i*(i + 1)*(2*i + 1));
    }
    return 3+somatorio;
}