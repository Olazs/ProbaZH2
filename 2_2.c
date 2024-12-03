#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main() {
    float arr[SIZE];
    int i;
    float sum = 0.0, average;
    float min_value;
    int min_index;

    // Véletlenszám generálás inicializálása
    srand(time(NULL));

    // Tömb feltöltése véletlenszámokkal -50.0 és +50.0 között
    for (i = 0; i < SIZE; i++) {
        arr[i] = (rand() % 101) - 50;  // Véletlen szám -50 és +50 között
        sum += arr[i];
    }

    // Átlag számítása
    average = sum / SIZE;
    printf("A tömb elemeinek átlaga: %.2f\n", average);

    // Legkisebb elem és annak helye
    min_value = arr[0];
    min_index = 0;

    for (i = 1; i < SIZE; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
            min_index = i;
        }
    }

    printf("A legkisebb elem: %.2f\n", min_value);
    printf("A legkisebb elem helye: %d\n", min_index);

    return 0;
}
