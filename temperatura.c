#include <stdio.h>

int main()
{
    float celsius;
    printf("quanti gradi fanno?\n");
    scanf("%f",&celsius);
    float farenheit = (1.8 * celsius + 32);
    float kelvin = (celsius + 273.15);
    printf("la temperatura in farenheit è %f\n",farenheit);
    printf("la temperatura in kelvin è %f\n",kelvin);
}