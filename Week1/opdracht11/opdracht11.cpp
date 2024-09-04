#include <stdio.h>

int main() {

	//Variabele om de leeftijd op te slaan
	int a, b, c, d;
	
	//Vragen om de leeftijd
	printf("Geef twee getallen: ");
	scanf_s("%d%d", &a, &b);

	c = a / b;
	d = a % b;

	printf("De groots gemene deler is: %d \n", c);
	printf("De rest is: %d \n", d);


}