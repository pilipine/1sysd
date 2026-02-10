//.Partie A Voir la fin du document NUMERATION.md

#include <stdio.h>

int main() {
    int base;
    int nombre;
    
    // Tableau pour stocker les chiffres du résultat
    int chiffres[32];   // 32 chiffres suffisent pour des entiers classiques
    int index = 0;      // Compte le nombre de chiffres trouvés

    // 1. Lire la base
    printf("Base : ");
    scanf("%d", &base);

    // 2. Lire le nombre en base 10
    printf("Nombre (en base 10) : ");
    scanf("%d", &nombre);

    // Vérification simple de la base
    if (base < 2 || base > 10) {
        printf("Base non supportee (utiliser une base entre 2 et 10).\n");
        return 1;
    }

    // Cas particulier : si le nombre est 0
    if (nombre == 0) {
        printf("Resultat : 0\n");
        return 0;
    }

    // 3. Conversion : on calcule les restes successifs
    // On stocke les restes dans le tableau "chiffres"
    while (nombre > 0) {
        int reste = nombre % base;   // reste de la division
        chiffres[index] = reste;     // on stocke le chiffre
        index++;                     // on passe à la case suivante
        nombre = nombre / base;      // on met à jour le nombre (quotient)
    }

    // 4. Affichage du résultat à l'envers
    printf("Resultat : ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d ", chiffres[i]);
    }
    printf("\n");

    return 0;
}
