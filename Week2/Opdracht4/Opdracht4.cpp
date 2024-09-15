#include<stdio.h>

int main() {
	char a;

	printf_s("Geef een char: \n");
	scanf_s("%c", &a);

	printf_s("%d\n", a);
}