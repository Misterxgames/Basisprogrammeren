#include <stdio.h>


int main() {

	double a;

	printf_s("Geef een cijfer: \n");
	scanf_s("%lf", &a);


	if (a < 0 || a > 10) {
		printf_s("Het getal moet tussen de 0 en 10 zijn.");
	} else if (a > 5.5) {
		printf_s("Het opgegeven cijfer is een voldoende.");
	} else {
		printf_s("Het opgegeven cijfer is een onvoldoende");
	}
}