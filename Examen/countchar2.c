#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int count_char(const char *s, char c) {
    int i = 0;
    int count = 0;

    while (s[i] != '\0') {
        if (s[i] == c) {
            count++;
        }
        i++;
    }

    return count;
}


int count_char_ignore_case(const char *s, char c) {
    int i = 0;
    int count = 0;


    c = tolower((unsigned char)c);

    while (s[i] != '\0') {

        char current = tolower((unsigned char)s[i]);

        if (current == c) {
            count++;
        }
        i++;
    }

    return count;
}

int main(int argc, char *argv[]) {


    if (argc != 3 && argc != 4) {
        printf("Usage : %s \"chaine\" \"caractere\" [-i]\n", argv[0]);
        return 1;
    }

    char *chaine = argv[1];
    char *caractere = argv[2];
    char c = caractere[0];


    int ignore_case = 0;

    if (argc == 4) {
        if (argv[3][0] == '-' &&
            argv[3][1] == 'i' &&
            argv[3][2] == '\0') {
            ignore_case = 1;
        } else {
            printf("Erreur : seul l'argument -i est autorisé.\n");
            return 1;
        }
    }

    int result;

    if (ignore_case == 1) {
        result = count_char_ignore_case(chaine, c);
    } else {
        result = count_char(chaine, c);
    }

    printf("%d\n", result);

    return 0;
}
