#include <stdio.h>

char a;

int main() {
	
	printf_s("type een letter: \n");
	scanf_s("%c", &a);

	if (a == 65 || 97 || 69 || 101 || 85 || 117 || 73 || 105 || 79 || 111) {
		printf_s("De ingevoerde letter is een klinker");
	}
	else {
		printf_s("De ingevoerde letter is een medeklinker");
	}
}