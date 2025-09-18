#include <stdio.h>
#include <stdlib.h>

int isDigit(char c);

int main(){
    char caractere;
    int resultado;
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    resultado = isDigit(caractere);
    if(resultado){
        resultado = caractere - '0';
        printf("O caractere digitado e um digito. Valor inteiro: %d\n", resultado);
    }
    else{
        printf("O caractere \"%c\" digitado nao e um digito.\n", caractere);
    }
}

int isDigit(char c){
    if(c >= '0' && c <= '9'){
        return 1;
    } else {
        return 0;
    }
}