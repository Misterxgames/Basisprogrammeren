#include <stdio.h>

int a;
int b;

int main() {

	printf_s("type twee een waardes: \n" );
	scanf_s("%d %d", &a, &b);

	if (a % b == 0 ) {
		printf_s("Waar");
	}
	else {
		printf_s("Niet waar");
	}
}