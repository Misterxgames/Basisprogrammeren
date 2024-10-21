#include <stdio.h>

void kwadrateerArray(int* arr, int length);

int main() {

	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };

	kwadrateerArray(a, 10);

	for (int i = 0; i != 10; i++) {
		printf_s("%d\n", a[i]);
	}

}

void kwadrateerArray(int* arr, int length) {
	
	for (int i = 0; i != length; i++) {
		arr[i] = arr[i] * arr[i];
	}
}