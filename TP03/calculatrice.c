#include <stdio.h>

int main() {

	int op;
	double first_number,second_number, result;

	printf("Donner un premier nombre : ");
	scanf("%lf", &first_number);

	printf("Donner un deuxième nombre : ");
	scanf ("%lf", &second_number);

	printf("\n 1.+(addition)\n 2.-(soustraction)\n 3.*(multiplication)\n 4./(division)\n");
	scanf("%d", &op);

	switch (op) {
		case 1:
		result = first_number + second_number;
		printf("%f", result);
		break;
		case 2:
                result = first_number - second_number;
		printf("%f", result);
		break;
 		case 3:
                result = first_number * second_number;
		printf("%f", result);
		break;
                case 4:
                result = first_number / second_number;
		printf("%f", result);
		break;
		default:
		printf("Mauvais saisie de l'opération");
		
		}		
}
