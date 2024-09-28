#include <stdio.h>

int main() {
    char nom[50], prenom[50];
    int age;
    char sexe;
    char email[50];

    printf("Entrez votre nom : ");
    scanf("%49s", nom);

    printf("Entrez votre prenom : ");
    scanf("%49s", prenom);

    printf("Entrez votre �ge : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);

    printf("Entrez votre adresse email : ");
    scanf("%49s", email);

    return 0;
}

