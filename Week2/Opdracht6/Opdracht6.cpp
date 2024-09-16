#include <stdio.h>

int main() {
	unsigned int counter = 0;
	unsigned int previous = 0;

	while (1) {
		previous = counter;
		counter++;

		//controleer op overflow: als counter kleiner is dan de vorige waarde
		if (counter < previous) {
			printf("Overflow detected bij waarde: %u\n", previous);
			break;
		}
	}

	return 0;
}