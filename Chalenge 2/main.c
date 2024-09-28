#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c , k;

    printf("Entrer la température en Celsius :");
    scanf("%f", &c);
    k = c + 273.15;
    printf("la valeur  en Kelvin est : %.2f" , k);


    return 0;
}
