#include <stdio.h>

int CijferSwap(int n);

int reversedNumber = 0, number, remainder;

int main() {

	printf_s("Geef een nummer: \n");
	scanf_s("%d", &number);

	int j = CijferSwap(6);

	printf_s("The reversednumber is %d", reversedNumber);

}

int CijferSwap(int n) {
	
	while (number != 0) {


		remainder = number % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		number /= 10;
	}
	
	return reversedNumber;

}