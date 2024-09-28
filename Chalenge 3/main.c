#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km , yards ;
    printf("Entrer  la distance en kilometres :");
    scanf("%f", &km);
    yards = km * 1093.61 ;
    printf("la valeur  en yards : %.2f", yards);


    return 0;
}
