#include<stdio.h>

int main() {
    int tab[] = { 42, 11, 51 };
    int a, b;

    a = 10;
    b = 33;

    printf("tab = [%d, %d, %d], a = %d, b = %d\n",
            tab[0], tab[1], tab[2], a, b);

    printf("addr de b   : %lld\n", &b);
    printf("addr de a   : %lld\n", &a);
    // pas de & (adresse de) devant tab : c'est déjà un pointeur
    printf("addr tab    : %lld\n", tab);
    printf("addr tab[0] : %lld\n", &tab[0]);
    printf("addr tab[1] : %lld\n", &tab[1]);
    printf("addr tab[2] : %lld\n", &tab[2]);

    printf("addr de b   : 0x%llx\n", &b);
    printf("addr de a   : 0x%llx\n", &a);
    printf("addr tab    : 0x%llx\n", tab);
    printf("addr tab[0] : 0x%llx\n", &tab[0]);
    printf("addr tab[1] : 0x%llx\n", &tab[1]);
    printf("addr tab[2] : 0x%llx\n", &tab[2]);

    // déclaration tardive
    int tab2[] = { 999, 331 };
    printf("addr tab2   : 0x%llx\n", tab2);
    printf("addr tab2[0]: 0x%llx\n", &tab2[0]);
    printf("addr tab2[1]: 0x%llx\n", &tab2[1]);
    printf("addr tab2[2]: 0x%llx\n", &tab2[2]); // !!!!
    printf("tab2[2] = %d\n", tab2[2]);      // !!!!
    printf("b       = %d\n", b);      // !!!!
    tab2[2] = 44;
    printf("tab2[2] = %d\n", tab2[2]);      // !!!!
    printf("b       = %d\n", b);      // !!!!
    b = 12;
    printf("tab2[2] = %d\n", tab2[2]);      // !!!!
    printf("b       = %d\n", b);      // !!!!
}
