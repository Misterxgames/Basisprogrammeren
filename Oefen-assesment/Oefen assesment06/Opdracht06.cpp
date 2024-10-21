#include <stdio.h>

void Draaiom(int* arr, int length);

int main() {

	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };

	Draaiom(a, 10);

	for (int i = 0; i != 10; i++) {
		printf_s("%d\n", a[i]);
	}

}

void Draaiom(int* arr, int length) {
	
	int temp0 = arr[0];
	int temp1 = arr[1];
	int temp2 = arr[2];
	int temp3 = arr[3];
	int temp4 = arr[4];
	int temp5 = arr[5];
	int temp6 = arr[6];
	int temp7 = arr[7];
	int temp8 = arr[8];
	int temp9 = arr[9];
	int temp10 = arr[10];
	arr[0] = temp9;
	arr[1] = temp8;
	arr[2] = temp7;
	arr[3] = temp6;
	arr[4] = temp5;
	arr[5] = temp4;
	arr[6] = temp3;
	arr[7] = temp2;
	arr[8] = temp1;
	arr[9] = temp0; 
	
}