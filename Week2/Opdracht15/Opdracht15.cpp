#include <stdio.h>

int a;
int b;
int c;

int main() {

	printf_s("Geef een waarde: \n");
	scanf_s("%d", &a);

	for (b = 1; b <= a; b++) {
		for (c = 1; c <= b; c++) {
			printf_s("%d", c);
		}
		printf_s("\n");
	}

}