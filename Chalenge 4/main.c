#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m_s , km_h ;
    printf("Entrer la vitesse en kilometres par heure (km/h) :");
    scanf("%f", &km_h);
    m_s = km_h * 0.27778;
    printf("la valeur en metres par seconde (m/s) : %.2f", m_s);
    return 0;
}
