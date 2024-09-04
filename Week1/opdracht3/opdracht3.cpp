#include <stdio.h>

int main()
{
	//Variabele om de leeftijd op te slaan
	int a, b;

	//Vragen om de leeftijd
	printf("Voer twee getallen in: ");
	scanf_s("%d%d", &a, &b);

	if (a > b) {
		printf("Getal 1 > getal 2");
	};
	if (b > a) {
		printf("Getal 2 > getal 1");
	};
	if (b = a) {
		printf("Getallen zijn even groot");
	};

}