#include <stdio.h>
#include <math.h>

int binaryNumber;
int decimalValue = 0;
int base = 1;
int reminder;


int main() {

	printf("Geef een binaire nummer: \n");
	scanf_s("%d", &binaryNumber);

	while (binaryNumber > 0) {
		reminder = binaryNumber % 10;
		binaryNumber = binaryNumber / 10;
		decimalValue += reminder * base;
		base = base * 2;
	}

	printf("Het decimale getal is: %d\n", decimalValue);

}