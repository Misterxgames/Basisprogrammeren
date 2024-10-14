#include <stdio.h>

int a;

int som37(int);

int main() {

	printf_s("Geef een getal: \n");
	scanf_s("%d", &a);

	int result = som37(a);

	if (som37(a)) {
		printf_s("De getallen die deelbaar zijn door 3 en/of 7 zijn bij elkaar opgetelt %d\n", result);
	}
	else {
		printf_s("Het opgegeven getal is niet te delen door 3 of 7");
	}
}

int som37(int) {
	int b = 0;

	if (a <= 0) {
		return 0;
	}
	
	for (int i = 1; i < a; i ++) {
		if (i % 3 == 0) {
			b += i;
		}
		else if (i % 7 == 0) {
			b += i;
		}
	}

	return b;


}