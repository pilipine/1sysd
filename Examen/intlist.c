#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node {
    int value;
    Node *next;
};

void print_list(Node *head) {
    Node *current;

    current = head;
    while ( current ) {
        printf("%d ", current->value);
        current = current->next; 
    }
    printf("\n");
}

Node *new_node(int value) {
    Node *node;
    node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

Node *append_value(Node *head, int value) {
    Node *current;

    current = head;

    if ( head == NULL ) {
        head = new_node(value);
    } else {
        current = head;
        while ( current->next ) {
            current = current->next;
        }
        current->next = new_node(value);
    }
    return head;
}
        
int length(Node *head) {
    Node *current;
    int len = 0;

    current = head;
    while ( current ) {
        len++;
        current = current->next;
    }
    return len; 
}

int total(Node *head) {
    int somme = 0;
    Node *courant = head;

    while (courant != NULL) {
        somme = somme + courant->value;
        courant = courant->next;
    }

    return somme;
}

double average(Node *head) {
    int somme = 0;
    int compteur = 0;
    Node *courant = head;

    while (courant != NULL) {
        somme = somme + courant->value;
        compteur = compteur + 1;
        courant = courant->next;
    }

    return (double)somme / compteur;
}

int cmp_list(Node *head1, Node *head2) {
    Node *p = head1;
    Node *q = head2;

    while (p != NULL && q != NULL) {
        if (p->value != q->value) {
            return 0;
        }
        p = p->next;
        q = q->next;
    }

    if (p == NULL && q == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    Node *head = NULL;

    head = append_value(head, 42);
    head = append_value(head, 4);
    head = append_value(head, 5);
    head = append_value(head, 42);
    head = append_value(head, 1);

    printf("Liste head : ");
    print_list(head);

    printf("Longueur          : %d\n", length(head));
    printf("Total             : %d\n", total(head));
    printf("Moyenne           : %.2f\n", average(head));

    
    Node *head2 = NULL;

    head2 = append_value(head2, 42);
    head2 = append_value(head2, 4);
    head2 = append_value(head2, 5);
    head2 = append_value(head2, 42);
    head2 = append_value(head2, 1);

    printf("\nListe head2 : ");
    print_list(head2);

    printf("cmp_list(head, head2) = %d (attendu 1)\n", cmp_list(head, head2));

     head2->next->next->value = 999;  

    printf("\nListe head2 modifiée : ");
    print_list(head2);

    printf("cmp_list(head, head2) = %d (attendu 0)\n", cmp_list(head, head2));

    return 0;
}
