#include <stdio.h>
#include <stdlib.h>

int count_char(const char *s, char c) {
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count++;
        }
    }

    return count;
}

int main(int argc, char *argv[]) {

    if (argc != 3) {
        printf("Usage : %s \"chaine\" \"caractere\"\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *chaine = argv[1];
    const char *car = argv[2];

    char c = car[0];

    int result = count_char(chaine, c);

    printf("%d\n", result);

    return EXIT_SUCCESS;
}
