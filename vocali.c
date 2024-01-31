#include <stdio.h>

void lettere(char lettera)
{
    if(lettera == 'a' || lettera == 'A' || lettera == 'e' || lettera == 'E'|| lettera == 'i' || lettera == 'I' || lettera =='o' ||lettera == 'O' || lettera =='u' || lettera == 'U') {
        printf("è una vocale");
    }
    else if(lettera >= 'a' && lettera <= 'z' || lettera >= 'A' && lettera <= 'Z') {
        printf("è una consonante");
    }
    else {
        printf("non è una lettera");
    }

}

int main()
{   char lettera;
    printf("dimmi una lettera\n");
    scanf("%c",&lettera);
    lettere(lettera);
}