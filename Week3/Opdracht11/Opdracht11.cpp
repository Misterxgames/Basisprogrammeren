#include <stdio.h>

int main() {

	int jaartal;

	printf_s("Geef een jaartal: ");
	scanf_s("%d", &jaartal);

	printf_s("Het jaartal in Romijnsecijfers is: ");

	while (jaartal != 0) {
		if (jaartal >= 1000){
			printf("M");
			jaartal -= 1000;
		}
		else if (jaartal >= 900) {
			printf_s("CM");
				jaartal -= 900;
		}
		else if (jaartal >= 500) {
			printf_s("D");
				jaartal -= 500;
		}
		else if (jaartal >= 400) {
			printf_s("CD");
			jaartal -= 400;
		}
		else if (jaartal >= 100) {
			printf_s("C");
			jaartal -= 100;
		}
		else if (jaartal >= 90) {
			printf_s("XC");
			jaartal -= 90;
		}
		else if (jaartal >= 50) {
			printf_s("L");
			jaartal -= 50;
		}
		else if (jaartal >= 40) {
			printf_s("XL");
			jaartal -= 40;
		}
		else if (jaartal >= 10) {
			printf_s("X");
			jaartal -= 10;
		}
		else if (jaartal >= 9) {
			printf_s("IX");
			jaartal -= 9;
		}
		else if (jaartal >= 5) {
			printf_s("V");
			jaartal -= 5;
		}
		else if (jaartal >= 4) {
			printf_s("IV");
			jaartal -= 5;
		}
		else if (jaartal >= 1) {
			printf_s("I");
			jaartal -= 1;
		}
	}

}