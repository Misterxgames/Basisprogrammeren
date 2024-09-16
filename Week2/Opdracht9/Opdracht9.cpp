#include <stdio.h>
#include <math.h>

float dalverbruik;
float piekverbruik;
float daltarief = 0.40;
float piektarief = 0.46;
float Leveringstarief = 80;
float elektrakosten;

int main() {

	printf_s("Geef uw dal verbruik en uw piek verbruik: \n");
	scanf_s("%f %f", &dalverbruik, &piekverbruik);

	elektrakosten = (daltarief * dalverbruik) + (piektarief * piekverbruik) + Leveringstarief;

	printf_s("Uw elektrakosten zijn: %.2f\n", elektrakosten);


}