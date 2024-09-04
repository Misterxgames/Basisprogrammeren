#include <stdio.h>
#include <math.h>

int main() {
	double pi = acos(-1.0);

	//Variabele om de leeftijd op te slaan
	int getal, resultaat;
	int keuze;

	//Vragen om de leeftijd
	printf("Kies een bewerking door 1 of 2 te typen:\n");
	printf("1. kwadraat\n");
	printf("2. derde machtsheffen\n");
	scanf_s("%d", &keuze);
	
	printf("Geef een getal: ");
	scanf_s("%d", &getal);
	
	if (keuze == 1) {
		resultaat = getal * getal;
		printf("De kwadraat van %d is %d.\n", getal, resultaat);
	};
	if (keuze == 2) {
		resultaat = getal * getal * getal;
		printf("De derde macht van %d is %d.\n", getal, resultaat);
	};
}