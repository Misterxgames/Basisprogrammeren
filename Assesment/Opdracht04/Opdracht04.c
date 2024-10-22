#include <stdio.h>

int arrayProduct(int* arr, int lenght);

int main() {
	int a[10] = { 1,2,3,4,5 };
	int b[10] = { 6,7,8,9,10 };

	arrayProduct(a, 5);

	printf_s("%d\n", arrayProduct(a, 5));
	printf_s("%d\n", arrayProduct(b, 5));
	

}

int arrayProduct(int* arr, int length) {
	int test=1;

	for (int i = 0; i != length; i++) {
		test *= arr[i];
	}
	return test;
}
