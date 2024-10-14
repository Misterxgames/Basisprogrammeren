#include <stdio.h>

int a;
int b;
int j;
int KleinsteSomDeler(int);


int main() {

	printf_s("Geef een getal: \n");
	scanf_s("%d", &a);

	int j = KleinsteSomDeler(b);

	printf_s("De kleinstesomdeler is: %d", KleinsteSomDeler);

}

int KleinsteSomDeler(int) {

	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			b += i;
		}
	}

	return b;
}