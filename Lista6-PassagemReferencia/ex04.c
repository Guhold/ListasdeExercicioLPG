#include <stdio.h>
#include <stdlib.h>

void calcula_hora(int totalMinutos, int *ph, int *pm);

int main(){
    int minutosDecorridos, horaAtual, minutoAtual;

    printf("Digite quantos minutos se passaram desde a meia-noite: ");
    scanf("%d", &minutosDecorridos);

    calcula_hora(minutosDecorridos, &horaAtual, &minutoAtual);

    if (horaAtual < 0 || (horaAtual >= 24 && minutoAtual > 0)){
        printf("Horario Invalido!");
        return 0;
    }

    if (horaAtual < 10 && minutoAtual < 10){
        printf("Horario Atual: 0%d:0%d", horaAtual, minutoAtual);
        return 0;
    }

    if (horaAtual < 10){
        printf("Horario Atual: 0%d:%d", horaAtual, minutoAtual);
        return 0;
    }

    if (minutoAtual < 10){
        printf("Horario Atual: %d:0%d", horaAtual, minutoAtual);
        return 0;
    }

    printf("Horario Atual: %d:%d", horaAtual, minutoAtual);
}

void calcula_hora(int totalMinutos, int *ph, int *pm){
    *ph = totalMinutos/60;
    *pm = totalMinutos%60;
}