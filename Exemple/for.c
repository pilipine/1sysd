#include<stdio.h>


int main() {
    int i;
    int sizes[] = { 12, 18, 22 };
    int doublesizes[3];

    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    for (i = 0; i < 3; i++) {
        doublesizes[i] = sizes[i] * 2;
    }

    for (i = 0; i < 3; i++) {
        printf("sizes[%d] = %d\n", i, sizes[i]);
        printf("doublesizes[%d] = %d\n", i, doublesizes[i]);
    }
}
