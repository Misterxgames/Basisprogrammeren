#include <stdio.h>



int main() {
	double bedrag = 1000;
	double rente = 2.00;

	printf_s("Jaar Bedrag\n");
	
	for (int i = 1; i < 16; i++) {
		bedrag = bedrag * (1 + rente / 100);

		printf_s("%2d %9.2f\n", i, bedrag);
	}

	

}