#include <stdio.h>

int main()
{
    float x = 0;
    float somma = 0;
    float numeri = 0;
    float media;

    while( x >= 0) {
        printf("inserisci un numero positivo\n");
        scanf("%f",&x);
        somma = somma + x;
        numeri = numeri + 1;

        if(x >= 0) {
        media = somma / numeri;
        printf("%f",media);
        }
        else {
            printf("non è positivo\n");
        }
    }

}