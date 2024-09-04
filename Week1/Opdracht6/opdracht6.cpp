#include <stdio.h>

int main()
{
	//Variabele om de leeftijd op te slaan
	float a;

	//Vragen om de leeftijd
	printf("Voer een getal in met 4 decimalen: ");
	scanf_s("%f", &a);

	printf("Het gemiddelde is: %.4f \n", a);

}