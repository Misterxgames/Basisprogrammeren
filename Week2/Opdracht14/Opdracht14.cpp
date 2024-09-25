#include <stdio.h>
#include <math.h>

float a;
float b;
float c;
float D;
double x1;
double x2;


int main() {

	printf_s("Geef de waarde a, b en c voor de ABC-formule: \n");
	scanf_s("%f %f %f", &a, &b, &c);

	D = pow(b, 2) - 4 * a * c;

	x1 = (-b + sqrt(D)) / (2 * a);
	x2 = (-b - sqrt(D)) / (2 * a);

	//printf_s("De waarde voor x1 is: %f. De waarde voor x2 is: %f", x1, x2);

	if (D > 0) {
		printf_s("Er zijn 2 oplossingen, namelijk x1: %f en x2: %f\n", x1, x2);
	}
	else if (D == 0) {
		printf_s("Er is 1 oplossing, namelijk x: %f\n", x1);
	}
	else {
		printf_s("Er is geen oplossing, want D < 0.\n");
	}

}