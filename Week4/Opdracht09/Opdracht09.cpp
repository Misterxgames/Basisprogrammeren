#include <stdio.h>

int fibonacci(int index);
int index;

int main() {
	
	printf_s("Voer de index in voor het Fibonacci-getal: ");
	scanf_s("%d", &index);

	if (index < 0) {
		printf_s("Voer een niet-negative index in. \n");
	}
	else {
		printf_s("Fibonacci(%d) = %d\n", index, fibonacci(index));
	}

}

int fibonacci(int index) {
	if (index == 0) {
		return 0;
	}
	else if (index == 1) {
		return 1;
	}
	else {
		return fibonacci(index - 1) + fibonacci(index - 2);
	}
}