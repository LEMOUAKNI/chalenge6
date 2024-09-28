#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;


    printf("Entrer la valeur de a : ");
    scanf("%d", &a);

    printf("Entrer la valeur de b : ");
    scanf("%d", &b);

    int somme = a + b;
    int difference = a - b;
    int produit = a * b;
    int division = a / b;
    printf("a + b = %d\n", somme);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", produit);
    printf("a / b = %d", division);
    return 0;
}


