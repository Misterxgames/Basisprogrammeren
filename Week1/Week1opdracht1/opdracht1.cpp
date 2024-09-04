#include <stdio.h>

int main()
{
	//Variabele om de leeftijd op te slaan
	int leeftijd;
	int Leeftijd;

	//Vragen om de leeftijd
	printf("Voer uw leeftijd in: ");
	scanf_s("%d", &leeftijd);

	Leeftijd = leeftijd * 12;

	//Leeftijd weergeven
	printf("Uw leeftijd is: %d maanden.\n", Leeftijd);

}