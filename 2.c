//
// Created by Olazs on 2024. 12. 02..
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// Segédfüggvény a véletlenszám generáláshoz
float generate_random_float() {
    return (float)(rand()) / (float)(RAND_MAX) * 20.0 - 8.0;  // Véletlen szám -8.0 és 12.0 között
}

int program2() {
    float arr[SIZE];
    int i, j;
    float temp;

    // Véletlenszámok generálása
    srand(time(NULL));

    printf("Generált véletlenszámok:\n");
    for (i = 0; i < SIZE; i++) {
        arr[i] = generate_random_float();
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    // Rendezés (buborékrendezéssel)
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Cseréljük meg a két elemet
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Legkisebb, legnagyobb, második legnagyobb, stb. elemek kiírása
    printf("\nRendezett elemek (növekvő sorrendben):\n");
    for (i = 0; i < SIZE; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    printf("\nA legkisebb elem: %.2f\n", arr[0]);
    printf("A legnagyobb elem: %.2f\n", arr[SIZE - 1]);

    // Kiírás a második legnagyobb elemekről
    printf("\nA második legnagyobb elem: %.2f\n", arr[SIZE - 2]);


    return 0;
}
