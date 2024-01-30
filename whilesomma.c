#include <stdio.h>

int main()
{
    int x = 0;
    int x2;
    while(x < 100) {
        x = x + 1;
        x2 = x + x2;
    }
    printf("%d",x2);
}