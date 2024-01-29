#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);
    scanf("%d", &numero4);
    scanf("%d", &numero5);
    int somma = numero1 + numero2 + numero3 + numero4 + numero5;
    printf("il risultato è %d", somma);
    return (0);
}