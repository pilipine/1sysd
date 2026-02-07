//.Comment demander un nombre

#include <stdio.h>   // Pour printf et scanf

int main(void) {     // Début du programme
    int n;

    printf("Entrez un nombre : ");  // On affiche un message
    scanf("%d", &n);                // On lit un entier au clavier

    printf("Plus 42 : %d\n", n + 42);  // On affiche le résultat

    return 0;   // Le programme s'est bien terminé
}
