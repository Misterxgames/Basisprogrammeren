#include <stdio.h>

int a;

int main() {
	
	printf_s("Geef een waarde: \n");
	scanf_s("%d", &a);
	
	for (int i = 0; i < a; i++) {
		if (a % 3 == 0) {
			a += i;
			
		}
	}

	
}