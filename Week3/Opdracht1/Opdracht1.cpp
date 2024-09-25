#include <stdio.h>

int a;

int main() {

	printf_s("Geef een getal: \n");
	scanf_s("%d", &a);

	if (a > 0) {
		printf_s("%d is groter dan 0\n", a);

	}
	else {
		printf_s("%d is kleiner of gelijk aan 0\n", a);
	}

}