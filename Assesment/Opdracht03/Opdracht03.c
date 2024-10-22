#include <stdio.h>

double inverseFaculteit(int n);
double res = 1;
double test;
int n;

int main() {

	printf_s("Geef een getal: \n");
	scanf_s("%d", &n);

	printf_s("De faculteit is: %.10lf\n", inverseFaculteit(n));
	

}

double inverseFaculteit(int n) {
	

	while (n > 1) {
		res *= n;
		n--;
	}
	test = (1 / res);
	return test;
}