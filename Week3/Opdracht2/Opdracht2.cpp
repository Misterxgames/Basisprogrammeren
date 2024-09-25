#include <stdio.h>

int a;

int main() {

	printf_s("Geef een getal: \n");
	scanf_s("%d", &a);

	while (a <= 100) {
		a = a * -2;
		printf_s("Nieuwe waarde van a: %d\n", a);
		
		if (a > 100) {
			break;
		}

	}

}