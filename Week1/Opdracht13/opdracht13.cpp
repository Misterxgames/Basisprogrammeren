#include <stdio.h>
#include <math.h>

int main() {
	double pi = acos(-1.0);

	//Variabele om de leeftijd op te slaan
	int a, b;

	//Vragen om de leeftijd
	printf("Geef een getal: ");
	scanf_s("%d", &a);

	b = a * a;

	printf("De kwadraat van %d is: %d \n", a, b);

}