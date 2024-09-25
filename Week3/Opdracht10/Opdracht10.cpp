#include <stdio.h>

int isPriemgetal(int a) {
	if (a <= 0) {
		return 0;
	}

	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0;
		}
	}

	return 1;
}


int main() {
	int getal;

	printf_s("Geef een getal: \n");
	scanf_s("%d", &getal);

	if (isPriemgetal(getal)) {
		printf_s("Het getal %d is een priemgetal\n", getal);
	}
	else {
		printf_s("het getal %d is geen priemgetal\n", getal);
	}

			
}