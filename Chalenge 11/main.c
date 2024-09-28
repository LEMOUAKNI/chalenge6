#include <stdio.h>
#include <stdlib.h>

int main()
{
    int longueur , largeur , surface ;
    printf("Entrer la longueur :");
    scanf("%d", &longueur);
    printf("Entrer la largeur :");
    scanf("%d", &largeur);
    surface = longueur * largeur;
    printf("la surface du triangle est : %d",surface);
    return 0;
}
