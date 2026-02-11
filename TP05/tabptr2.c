#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int main() {
    int size;
    double numbers[MAX];

    printf("Combien de nombres gérer (maximum %d) ? ", MAX);
    scanf("%d", &size);

    for (int i = 0; i < size; i++) { // répète size fois
        printf("Un nombre : ");
        scanf("%lf", &numbers[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("%.2lf ", numbers[i]);
    }
    printf("\n");

}
