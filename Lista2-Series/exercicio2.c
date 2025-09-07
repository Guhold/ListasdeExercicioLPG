#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int termosDaSerie;
    double somatorio = 0;

    printf ("Digite quantos termos voce quer na serie: ");
    scanf ("%d", &termosDaSerie);

    for (int i = 1; i <= termosDaSerie; i++){
        somatorio += pow(-1.0, i+1)/i;
    }

    printf ("O somatorio com %d termos resulta em %.2lf", termosDaSerie, somatorio);
}