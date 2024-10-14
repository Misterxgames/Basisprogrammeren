#include <stdio.h>

int swap(int, int);

int a;// = 5;
int b;// = 4;
int c;

int main() {

	
	printf_s("Geef twee waardes: \n");
	scanf_s("%d%d", &a, &b);
	
	int j = swap(1, 2);

	printf_s("%d\n%d\n", a, b);

}

int swap(int, int) {
	c = a;
	a = b;
	b = c;

	
	
	return a, b;
}