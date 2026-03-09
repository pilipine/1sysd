#include <stdio.h>
#include <stdlib.h>

double celsius2fahrenheit(double c) {
    return (9.0/5.0) * c + 32.0;
}

double fahrenheit2celsius(double f) {
    return (f - 32.0) * 5.0/9.0;
}

int main(void) {
    int choix = 0;
    double valeur = 0.0;
    double resultat = 0.0;

    printf("Convertisseur de température\n");
    printf("1) Celsius (°C) vers Fahrenheit (°F)\n");
    printf("2) Fahrenheit (°F) vers Celsius (°C)\n");
    printf("Votre choix (1 ou 2) : ");

    if (scanf("%d", &choix) != 1) {
        fprintf(stderr, "Erreur : saisie du choix invalide.\n");
        return EXIT_FAILURE;
    }

    if (choix != 1 && choix != 2) {
        fprintf(stderr, "Erreur : choix doit être 1 ou 2.\n");
        return EXIT_FAILURE;
    }

    printf("Entrez la valeur à convertir : ");
    if (scanf("%lf", &valeur) != 1) {   
        fprintf(stderr, "Erreur : valeur numérique invalide.\n");
        return EXIT_FAILURE;
    }

    if (choix == 1) {
        resultat = celsius2fahrenheit(valeur);
        printf("%.2f °C = %.2f °F\n", valeur, resultat);
    } else {
        resultat = fahrenheit2celsius(valeur);
        printf("%.2f °F = %.2f °C\n", valeur, resultat);
    }

    return EXIT_SUCCESS;
}
