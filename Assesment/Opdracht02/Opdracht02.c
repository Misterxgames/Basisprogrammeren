#include <stdio.h>

int main() {
	int a;
	int b;
	int c;

	printf_s("Geef drie getallen: \n");
	scanf_s("%d%d%d", &a, &b, &c);

	if ((a > b && a > c && b > c)) {
		printf_s("%d\n%d\n%d", a, b, c);
	}
	if ((a > b && a > c && c > b)) {
		printf_s("%d\n%d\n%d", a, c, b);
	}
	if (b > a && b > c && a > c) {
		printf_s("%d\n%d\n%d", b, a, c);
	}
	if (b > a && b > c && c > a) {
		printf_s("%d\n%d\n%d", b, c, a);
	}
	if (c > a && c > b && b > a) {
		printf_s("%d\n%d\n%d", c, b, a);
	}
	if (c > a && c > b && a > b) {
		printf_s("%d\n%d\n%d", c, a, b);
	}
	if (a == b || c) {
		printf_s("%d\n%d\n%d", a, b, c);
	}
}