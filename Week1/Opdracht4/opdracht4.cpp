#include <stdio.h>

int main()
{
	//Variabele om de leeftijd op te slaan
	int a, b, c;

	//Vragen om de leeftijd
	printf("Voer drie getallen in: ");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a > b && a > c) {
		printf("Getal 1 > getal 2 en 3");
	};
	if (b > a && b > c) {
		printf("Getal 2 > getal 1 en 3");
	};
	if (c > a && c > b) {
		printf("Getal 3 > getal 1 en 2");
	};
	if (b == a && b == c && a == c ) {
		printf("Getallen zijn even groot");
	};

}