#include <stdio.h>

void Draaiom(int* p, int length);

int main() {

	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };

	Draaiom(a, 10);

	for (int i = 0; i != 10; i++) {
		printf_s("%d\n", a[i]);
	}

}

void Draaiom(int* p, int length) {

	int temp0 = p[0];
	int temp1 = p[1];
	int temp2 = p[2];
	int temp3 = p[3];
	int temp4 = p[4];
	int temp5 = p[5];
	int temp6 = p[6];
	int temp7 = p[7];
	int temp8 = p[8];
	int temp9 = p[9];
	int temp10 = p[10];
	p[0] = temp9;
	p[1] = temp8;
	p[2] = temp7;
	p[3] = temp6;
	p[4] = temp5;
	p[5] = temp4;
	p[6] = temp3;
	p[7] = temp2;
	p[8] = temp1;
	p[9] = temp0;

}
