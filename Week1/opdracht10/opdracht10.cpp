#include <stdio.h>

int main() {

	//Variabele om de leeftijd op te slaan
	float ohm;
	float voltage;
	float ampèrage;

	//Vragen om de leeftijd
	printf("Geef een voltage en een weerstandswaarde: ");
	scanf_s("%f%f", &voltage, &ohm);

	ampèrage = voltage / ohm;

	printf("De amperage is: %f A\n", ampèrage);


}