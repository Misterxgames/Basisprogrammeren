#include <stdio.h>

int a;
int n;
int IsPriem(int a);


int main() {

	printf_s("Geef een getal voor n: \n");
	scanf_s("%d", &a);

	int j = IsPriem(a);

	printf_s("%d\n", j);

}

int IsPriem(int a) {

	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}