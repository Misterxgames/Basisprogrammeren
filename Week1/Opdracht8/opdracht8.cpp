#include <stdio.h>


int main() {

	//Variabele om de leeftijd op te slaan
	float exBTW;
	float BTW;
	float incBTW;

	//Vragen om de leeftijd
	printf("Geef een prijs exclusief btw: ");
	scanf_s("%f", &exBTW);

	BTW = exBTW * 21 / 100;
	incBTW = exBTW + BTW;

	printf("De prijs inclusief BTW is: %.2f euro \n", incBTW);
	

}