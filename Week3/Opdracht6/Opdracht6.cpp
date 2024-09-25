#include<stdio.h>


int main() {
	int i;

	printf_s("Even nummers tussen 0 en 200:\n");

	for (i = 2; i <= 200; i += 2) {
		printf_s("%d\n", i);
	}
}