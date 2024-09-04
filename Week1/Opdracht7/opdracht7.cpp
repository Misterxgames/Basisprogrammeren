#include <stdio.h>
#include <math.h>

int main() {
	double pi = acos(-1.0);

	//Variabele om de leeftijd op te slaan
	float diameter;
	float oppervlakte;
	float omtrek;

	//Vragen om de leeftijd
	printf("Geef de diameter van de cirkel: ");
	scanf_s("%f", &diameter);

	oppervlakte = pi * pow((diameter / 2), 2);
	omtrek = pi * diameter;

	printf("De oppervlakte is: %.2f \n", oppervlakte);
	printf("De omtrek is: %.2f \n", omtrek);

}