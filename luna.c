#include <stdio.h>

int main()
{
    int annonascita;
    int annoluna = 1969;
    printf("in che anno sei nato?\n");
    scanf("%d",&annonascita);

    if(annonascita == annoluna) {
        printf("sei nato nel 1969");
    }
    if(annonascita > annoluna) {
        printf("sei nato %d anni dopo il 1969\n",(annonascita - annoluna));
    }
    if(annonascita < annoluna) {
        printf("sei nato %d anni prima del 1969\n",(annonascita - annoluna));
    }

}