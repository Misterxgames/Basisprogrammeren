#include <stdio.h>

int KomtVoor(int* arr1, int* arr2, int* arr3, int* arr4, int lenght, int getal);
int m;


int main() {
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };
	int b[10] = { 6,47,7,25,88,51,4,55,75,12 };
	int c[10] = { 11,32,49,67,8,96,57,94,7,3 };
	int d[10] = { 22,90,3,26,58,34,34,2,19,14 };
	int e[10] = { 0 };
	

	printf_s("Geef een getal: \n");
	scanf_s("%d", &m);


	KomtVoor(a, b, c, d, 10, m);

	/*for (int i = 0; i != 10; i++) {
		printf_s("%d\n", e[i]);
	}*/

	printf_s("%d\n", KomtVoor(a, b, c, d, 10, m));


}

int KomtVoor(int* arr1, int* arr2, int* arr3, int* arr4, int lenght, int getal) {
	int x = 0;
	for (int i = 0; i != lenght; i++) {
		if ((arr1[i] == m) || (arr2[i] == m) || (arr3[i] == m) || (arr4[i] == m)) {
			return 1;
		}
	}
	return 0;
}