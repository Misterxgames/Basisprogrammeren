#include <stdio.h>

int berekenGemiddelde(int* arr, int length);


int main() {
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };

	berekenGemiddelde(a, 10);

	printf_s("%d", berekenGemiddelde(a, 10));

}

int berekenGemiddelde(int* arr, int length) {
	int x = 0;
	for (int i = 0; i != length; i++) {
		x += arr[i];
	}
	x = x / 10;
	return x;

}