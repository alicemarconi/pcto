#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    printf("dimmi un numero\n");
    scanf("%d",&numero1);
    printf("un altro\n");
    scanf("%d",&numero2);
    if(numero1 % numero2 == 0) {
        printf("so multipli");
    }
    else{
        printf("non so multipli");
    }





}