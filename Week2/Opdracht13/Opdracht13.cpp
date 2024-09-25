#include <stdio.h>

int a;
int b;

int main() {

	printf_s("Geef twee waardes: \n");
		scanf_s("%d%d", &a, &b);

	if (a % 10 == b % 10) {
		printf_s("Laatste cijfers van %d en %d zijn gelijk\n", a, b);
	}
	else {
		printf_s("de laatste getallen zijn niet gelijk.\n");
	}

}