#include <stdio.h>
#include <stdlib.h>

int main(){
    int horaInicial, horaFinal;
    int resultado = 0;

    printf ("Digite o horario inicial e o horario final: ");
    scanf ("%d%d", &horaInicial, &horaFinal);

    if (horaInicial == horaFinal){
        printf ("O JOGO DUROU 24 HORA(S)");
        return 0;
    }

    if (horaInicial < horaFinal){
        resultado = horaFinal - horaInicial;
        printf ("O JOGO DUROU %d HORA(S)", resultado);
        return 0;
    }

    if (horaInicial > horaFinal){
        resultado = 24 - horaInicial + horaFinal;
        printf ("O JOGO DUROU %d HORA(S)", resultado);
    }

    return 0;
}