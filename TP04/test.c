//Enoncer 1

#include<stdio.h>

int main() {
	int valeur , data[5];
	int somme = 0;

	printf("Donner un nombre (max 5): ");
	scanf("%d", &valeur); 

	for (int i = 0; i < valeur; i++){
		printf("Entrer un nombre : ");
		scanf("%d", &data[i]);
		somme+= data[i];
	}
	printf("La somme de tous ces nombres est %d\n",somme);

}
