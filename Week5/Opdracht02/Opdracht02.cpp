#include <stdio.h>

int som(int* arr, int lenght);


int main() {
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };
	int b[10] = { 6,47,7,25,88,51,4,55,75,12 };
	int c[10] = { 11,32,49,67,8,96,57,94,7,3 };
	int d[10] = { 22,90,3,26,58,34,34,2,19,14 };
	int e[10] = { 0 };

	som(a, 10);

	printf_s("%d\n", som(a, 10));
	printf_s("%d\n", som(b, 10));
	

}

int som(int* arr, int length) {
	int x = 0;

	for (int i = 0; i != length; i++) {
		x += arr[i];
	}
	return x;
}