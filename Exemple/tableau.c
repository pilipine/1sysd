#include<stdio.h>

int main() {
    int N, data[100];

    printf("Nombres de valeurs (max 100) : ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Valeur n°%d : ", i+1);
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", data[i]*data[i]);
    }
    printf("\n");
}
