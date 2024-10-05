#include <stdio.h>

int Aantalkeer(int a, int b, int c, int d);

int main() {
	int a, b, c, d;
	double x;

	printf_s("Typ vier waardes: \n");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);

	printf_s("%f", gemiddelde(a, b, c, d));
}

double gemiddelde(int a, int b, int c, int d) {
	double x = (a + b + c + d) / 4.0;

	return x;
}