#include <stdio.h>

int a;
int SomPriem(int a);
int IsPriem(int a);


int main() {

	printf_s("Geef een getal voor n: \n");
	scanf_s("%d", &a);

	int som = SomPriem(a);

	if (IsPriem(a)) {
		printf_s("%d is een priemgetal.\n", a);
		printf_s("De som van priemgetallen kleiner dan %d is: %d\n", a, som);
	}
	else {
		printf_s("%d is geen priemgetal.\n", a);
	}
	
}

int IsPriem(int a) {

	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}

int SomPriem(int a) {

	int som = 0;

	for (int i = 2; i < a; i++) {
		if (IsPriem(i)) {
			som += i;
		}
				
	}
	return som;
}

