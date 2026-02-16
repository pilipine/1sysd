#include<stdio.h>

int main(int argc, char *argv[]) {
    double a,b, result;
    char op;

    // on suppose que argc vaut bien 3 (ou plus)

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
            printf("Opération inconnue.\n");
            // ou return 1;
            exit(1);
    }
    printf("%.2lf\n", result);
    return 0;
}
