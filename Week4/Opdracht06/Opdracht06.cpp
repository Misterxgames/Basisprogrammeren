#include <stdio.h>
#include <stdlib.h>

// Functie om de grootste gemene deler (GGD) te berekenen met het Euclidische algoritme
int ggd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Functie om de kleinste gemene veelvoud (KGV) van twee getallen te berekenen
int kgv(int a, int b) {
    return abs(a * b) / ggd(a, b);
}

// Functie om de KGV van meerdere getallen te berekenen
int kgv_van_meerdere_getallen(int n) {
    int resultaat = 1;  // Start met KGV van 1

    // Bereken het KGV voor alle getallen van 1 t/m n
    for (int i = 2; i <= n; i++) {
        resultaat = kgv(resultaat, i);
    }

    return resultaat;
}

int main() {
    int n;

    // Vraag de gebruiker om een waarde voor n
    printf("Voer een getal n in: ");
    scanf_s("%d", &n);

    if (n < 1) {
        printf("Voer een getal groter dan 0 in.\n");
        return 1;
    }

    // Bereken het KGV voor de getallen van 1 t/m n
    int resultaat = kgv_van_meerdere_getallen(n);
    printf("Het kleinste gemene veelvoud van 1 t/m %d is: %d\n", n, resultaat);

    return 0;
}
