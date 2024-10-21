#include <stdio.h>

void printEvenSom(int n);
int n;

int main() {

	printf_s("Geef een getal: \n");
	scanf_s("%d", &n);

	printEvenSom(n);

}

void printEvenSom(int n) {
	int b = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			b += i;
		}
	}
	printf_s("%d", b);
}