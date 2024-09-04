#include <stdio.h>

int main()
{
	//Variabele om de leeftijd op te slaan
	int a, b;

	//Vragen om de leeftijd
	printf("Voer twee getallen in: ");
	scanf_s("%d%d", &a, &b);

	if (a == b) {
		printf("Gelijk");
	};
	if (b != a) {
		printf("Ongelijk");
	};
}