#include <stdio.h>
#include <stdlib.h>

int main(){
    int numTestes;
    float nota1, nota2, nota3;

    printf("Digite quantos casos voce quer testar: ");
    scanf("%d", &numTestes);

    float resultado[numTestes];

    for (int i = 0; i < numTestes; i++){
        printf("Digite 3 notas: ");
        scanf("%f%f%f", &nota1, &nota2, &nota3);
        resultado[i] = (nota1*2 + nota2*3 + nota3*5)/10;
    }

    for (int i = 0; i < numTestes; i++){
        printf("%.1f\n", resultado[i]);
    }

}