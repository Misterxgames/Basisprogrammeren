#include <stdio.h>
int a = 10;
int b = 100000000000;
unsigned int c = a * b;

int main() {
	if (c <= 214783647) {
		printf_s("%d\n", c);
	}
	else {
		printf_s("Overflow\n");
	}



}