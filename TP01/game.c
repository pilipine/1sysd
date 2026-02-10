#include <stdio.h>
#include <stdlib.h>

int main() {
    int secret, guess;

    secret = rand() % 10 + 1;

    printf("J'ai choisi un nombre entre 1 et 10\n");
    printf("Votre proposition : ");
    scanf("%d", &guess);

    if (guess < secret) {
        printf("Trop petit\n");
    } else if (guess > secret) {
        printf("Trop grand\n");
    } else {
        printf("Trouvé !\n");
    }

    return 0;
}
