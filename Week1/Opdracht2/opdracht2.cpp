#include <stdio.h>

int main()
{
	//Variabele om de leeftijd op te slaan
	int a, b, c;
	int gemiddelde;

	//Vragen om de leeftijd
	printf("Voer drie getallen in: ");
	scanf_s("%d%d%d", &a, &b, &c);

	gemiddelde = (a + b + c) / 3;

	//Leeftijd weergeven
	printf("Het gemiddelde is: %d \n", gemiddelde);

}