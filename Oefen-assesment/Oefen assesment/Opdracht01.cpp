#include <stdio.h>

int a;

int main() {

	printf_s("Geef een getal: \n");
	scanf_s("%d", &a);

	for (a; a >= 0; a--) {
		printf_s("%d\n", a);
	}
}

