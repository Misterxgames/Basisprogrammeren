#include <stdio.h>

int main() {
	float a, b, c, d, e, f, g;
	
	printf_s("Typ zes getallen:\n");
	scanf_s("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

	g = (a + b + c + d + e + f) / 6;

	if (g >= 5.5) {
		printf_s("Het gemiddelde is: %.2f en dat is een voldoende\n", g);
	}
	else {
		printf_s("Het gemiddelde is: %.2f en dat is een onvoldoende\n", g);
	}
	
}