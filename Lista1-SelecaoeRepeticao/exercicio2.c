#include <stdio.h>
#include <stdlib.h>

int main(){
    float ladoA, ladoB, ladoC, variavelTemporaria;
    printf("Digite os 3 lados do triangulo: ");
    scanf("%f%f%f", &ladoA,&ladoB,&ladoC);

    if (ladoA < ladoB){
        variavelTemporaria = ladoA;
        ladoA = ladoB;
        ladoB = variavelTemporaria;
    }
    if (ladoA < ladoC){
        variavelTemporaria = ladoA;
        ladoA = ladoC;
        ladoC = variavelTemporaria;
    }
    if (ladoB < ladoC){
        variavelTemporaria = ladoB;
        ladoB = ladoC;
        ladoC = variavelTemporaria;
    }

    if (ladoA >= ladoB + ladoC){
        printf ("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if (ladoA*ladoA == (ladoB*ladoB) + (ladoC*ladoC)){
        printf ("TRIANGULO RETANGULO\n");
    }
    if (ladoA*ladoA > (ladoB*ladoB) + (ladoC*ladoC)){
        printf ("TRIANGULO OBTUSANGULO\n");
    }
    if (ladoA*ladoA < (ladoB*ladoB) + (ladoC*ladoC)){
        printf ("TRIANGULO ACUTANGULO\n");
    }
    if (ladoA == ladoC){
        printf ("TRIANGULO EQUILATERO\n");
        return 0;
    }
    if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
        printf ("TRIANGULO ISOSCELES\n");
    }

}