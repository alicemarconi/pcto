#include <stdio.h>

int main()
{
    int anno;
    printf("che anno è?\n");
    scanf("%d",&anno);
    if((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 ==0)) {
        printf("è un anno bisestile");
    }
    else {
        printf("non è un anno bisestile");
    }

}