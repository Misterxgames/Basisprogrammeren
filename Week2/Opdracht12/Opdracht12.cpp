#include <stdio.h>
#include <math.h>

double x;
double n;
float resultaat;

int main() {
	printf_s("Geef een grondtal en een getal voor de macht: \n");
	scanf_s("%lf %lf", &x, &n);

	resultaat = pow(x, n);

	printf_s("het resultaat van %.2f tot de macht %.2f is: %.2f\n", x, n, resultaat);

}