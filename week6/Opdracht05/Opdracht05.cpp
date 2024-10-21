#include <stdio.h>
#include <stdint.h>



void printBinary(uint8_t n);
uint8_t BITOR(uint8_t a, uint8_t b);
uint8_t BITANDINV(uint8_t a, uint8_t b);
uint8_t BITTOGGLE(uint8_t a, uint8_t b);


int main() {
	uint8_t a = 0b1001000;
	uint8_t b = 0b11110011;
	uint8_t c = 0b1100011;

	uint8_t result_OR = BITOR(a, b);
	uint8_t result_ANDINV = BITANDINV(a, b);
	uint8_t result_BITTOGGLE = BITTOGGLE(a, b);

	printf_s("Resultaat BITOR: ");
	printBinary(result_OR);
	printf_s("\n");

	printf_s("Resultaat BITANDINV: ");
	printBinary(result_ANDINV);
	printf_s("\n");

	printf_s("Resultaat BITTOGGLE: ");
	printBinary(result_BITTOGGLE);
	printf_s("\n");



}

void printBinary(uint8_t n) {

	for (int i = 7; i >= 0; i--) {
		uint8_t bit = (n >> i) & 1;
		printf_s("%u", bit);
	}
	printf_s("\n");
}

uint8_t BITOR(uint8_t a, uint8_t b) {
	
	return a |= b;

}

uint8_t BITANDINV(uint8_t a, uint8_t b) {
	return a &=~b;
}


uint8_t BITTOGGLE(uint8_t a, uint8_t b) {
	return a ^= b;

}