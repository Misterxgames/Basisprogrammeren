#include <stdio.h>

int main() {

	int n;
	int res = 1;

	printf_s("Geef een getal: \n");
	scanf_s("%d", &n);

	while (n > 1) {
		res *= n;
		n--;
	}

	printf_s("De facultiteit is: %d\n", res);

}