    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #define MAX 100

    void trim (char str[]);

    int main(){
        char string[MAX];
        printf ("Digite uma string: ");
        fgets (string, MAX, stdin);

        trim (string);

        printf ("%s", string);

    }

    void trim (char str[]){
        int i = 0, j;
        for (j = 0; str[j] != '\n'; j++);

        while (str[i] == ' '){
            i++;
        }

        while (str[j] == ' ' || str[j] == '\n'){
            j--;
        }
        
        int k = 0;
        while (i <= j){
            str[k] = str[i];
            i++ , k++;
        }

        str[k] = '\0';
    }