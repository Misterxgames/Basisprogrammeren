#include <stdio.h>
#include <math.h>

int a;

int main() {
	printf_s("Geef een positief getal: \n");
	scanf_s("%d", &a);

	for (float i = 1; i <= a; i++) {

		printf_s("De wortel van is: %.2f\n", sqrt(i));
	}

}