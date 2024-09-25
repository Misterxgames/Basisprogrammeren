#include <stdio.h>

unsigned long long fibonacci(int n) {
	unsigned long long a = 0, b = 1, volgende;

	if (n == 0) {
		return a;
	}

	for (int i = 2; i <= n; i++) {
		volgende = a + b;
		a = b;
		b = volgende;
	}
	return b;

}

int main() {

	int getal;

	printf_s("Voer een positief geheel getal in: \n");
	scanf_s("%d", &getal);

	if (getal < 0) {
		printf_s("Voer een positief getal in.\n");
		return 1;
	}


	
	
	printf_s("het %d-de Fibonacci-getal is: %llu\n", getal, fibonacci(getal));

		return 0;

}