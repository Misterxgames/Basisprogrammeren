#include <stdio.h>

int main() {

	//Variabele om de leeftijd op te slaan
	int totaleSeconden;
	int uur;
	int minuten;
	int seconden;
	
	//Vragen om de leeftijd
	printf("Voer aantal seconden in: ");
	scanf_s("%d", &totaleSeconden);

	uur = totaleSeconden / 3600;
	minuten = (totaleSeconden % 3600) / 60;
	seconden = totaleSeconden % 60;


	printf("Aantal uur: %d \n", uur);
	printf("Aantal minuten: %d \n", minuten);
	printf("Resterende seconden: %d \n", seconden);

}