#include <stdio.h>

int main()
{
    int numero;
    int x = 2;
    int divisori = 0;

    printf("inserisci un numero\n");
    scanf("%d",&numero);

    while(x < numero) {
        if(numero % x == 0) {
            divisori = divisori + 1;
        }
        x = x + 1;
    }
    if(divisori == 0) {
        printf("è un numero primo");
    }
    else {
        printf("non è un numero primo");
    }

}   