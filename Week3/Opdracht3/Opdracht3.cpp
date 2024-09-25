#include <stdio.h>

int main() {
	int a;

	scanf_s("%d\n", &a);

	for (int i = 0; i < a; i++) {
		printf_s("Het kwadraat van %d is %d\n", i, i * i);
	}
}