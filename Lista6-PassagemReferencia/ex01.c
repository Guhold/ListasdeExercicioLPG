#include <stdio.h>
#include <stdlib.h>

void inc_dec (int *a, int *b);

int main(){
    int numero1, numero2;

    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &numero1, &numero2);

    inc_dec(&numero1, &numero2);

    printf("Incremento de %d: %d\n", numero1 - 1, numero1);
    printf("Decremento de %d: %d\n", numero2 + 1, numero2);
    return 0;
}

void inc_dec (int *a, int *b){
    (*a)++;
    (*b)--;
}