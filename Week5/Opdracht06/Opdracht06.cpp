#include <stdio.h>

void Sorteer(int* arr1, int lenght);


int main() {
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };
	int b[10] = { 6,47,7,25,88,51,4,55,75,12 };
	int c[10] = { 11,32,49,67,8,96,57,94,7,3 };
	int d[10] = { 22,90,3,26,58,34,34,2,19,14 };
	int e[10] = { 0 };


	Sorteer(a, 10);
	Sorteer(b, 10);
	Sorteer(c, 10);
	Sorteer(d, 10);

	for (int i = 0; i != 10; i++) {
		printf_s("%d ", a[i]);
	}
	printf_s("\n");

	for (int i = 0; i != 10; i++) {
		printf_s("%d ", b[i]);
	}
	printf_s("\n");

	for (int i = 0; i != 10; i++) {
		printf_s("%d ", c[i]);
	}
	printf_s("\n");

	for (int i = 0; i != 10; i++) {
		printf_s("%d ", d[i]);
	}
	printf_s("\n");

	//printf_s("%d\n", maximum(a, 10, m));


}

void Sorteer(int* arr1, int lenght) {
	int temp;

	for (int i = 0; i < lenght - 1; i++) {
		for (int j = 0; j < lenght - i - 1; j++) {
			if (arr1[j] > arr1[j + 1]) {
				temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}

	}
}