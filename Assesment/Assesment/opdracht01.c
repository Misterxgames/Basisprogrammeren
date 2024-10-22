#include <stdio.h>

int main() {
	double a;
	double b;
	double c;
	double d;

	printf_s("Geef drie getallen: \n");
	scanf_s("%lf%lf%lf", &a, &b, &c);

	d = a * b * c;

	printf_s("Het vermenigvuldigen van de opgegeven getallen geeft: %.3lf", d);

}