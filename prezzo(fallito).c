#include <stdio.h>

int main()
{
    int x = 5;
    int numerocose = 0;
    int prezzototale = 0;
    int prezzoscontato = 0;

    printf("quanta roba prendi?\n");
    scanf("%d",&numerocose);

    while(numerocose > 0) {

    if(numerocose > 30 && numerocose <= 50) {
        prezzototale = x * numerocose;
        prezzoscontato = prezzototale / 10;
        printf("dammi %d euri\n",prezzoscontato);
    }
    else if(numerocose > 50) {
        prezzototale = x * numerocose;
        prezzoscontato = (prezzototale / 100) * 15;
        printf("dammi %d euri\n",prezzoscontato);
    }
    else if(numerocose <= 30) {
        prezzoscontato = x * numerocose;
        printf("dammi %d euri\n",prezzoscontato);
    }
    }
    return (0)
}
