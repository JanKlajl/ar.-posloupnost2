#include <stdio.h>

int main(void) {

	int diference = 0;
	int predchozi = 0;

		printf("zadejte prvni clen aritmeticke posloupnosti: ");
		scanf("%d", &predchozi);

		printf("zadejte druhy clen aritmeticke posloupnosti: ");
		scanf("%d", &diference);

		printf("\n");
	for (int x = 1; x <= 5; x++) {
		printf("clen cislo: %d: %d\n", x, predchozi);
		predchozi += diference;
	}
}
