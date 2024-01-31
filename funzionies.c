#include <stdio.h>

void stampaQuadrato ()
{
    int numero;
    int quadrato;

    printf("inserisci un numero");
    scanf("%d",&numero);
    quadrato = numero * numero;
    printf(" il quadrato di %d è %d", numero, quadrato);
    
}

int main ()
{
    stampaQuadrato ();
    stampaQuadrato ();
    stampaQuadrato ();
    printf("fine\n");
}