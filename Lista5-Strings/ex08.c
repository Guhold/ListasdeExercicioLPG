#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int data2int (char str[], int *dia, int *mes, int *ano);

int main(){
    char data[MAX];
    int dia, mes, ano, resultado;

    printf ("Digite uma data no formato dd/mm/aaaa: ");
    fgets(data, MAX, stdin);

    resultado = data2int(data, &dia, &mes, &ano);

    if (!resultado){
        printf("Data invalida\n");
        return 0;
    }

    printf("Data valida: %02d/%02d/%04d\n", dia, mes, ano);
    return 0;
}

int data2int (char str[], int *dia, int *mes, int *ano){
    if (strlen(str) != 11 || str[2] != '/' || str[5] != '/'){
        return 0;
    }

    for (int i = 0; str[i] != '\n'; i++){
        if (i == 2 || i == 5) continue;
        if (str[i] < '0' || str[i] > '9'){
            return 0;
        }
    }

    *dia = (str[0] - '0') * 10 + (str[1] - '0');
    *mes = (str[3] - '0') * 10 + (str[4] - '0');
    *ano = (str[6] - '0') * 1000 + (str[7] - '0') * 100 + (str[8] - '0') * 10 + (str[9] - '0');

    if (*mes < 1 || *mes > 12 || *dia < 1 || *dia > 31){
        return 0;
    }

    return 1;
}