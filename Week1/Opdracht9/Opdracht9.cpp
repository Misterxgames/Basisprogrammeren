#include <stdio.h>


int main() {

	//Variabele om de leeftijd op te slaan
	float kmh;
	double ms;

	//Vragen om de leeftijd
	printf("Geef een snelheid in kmh: ");
	scanf_s("%f", &kmh);

	ms = kmh / 3.6;
	

	printf("De snelheid is: %f m/s \n", ms);


}