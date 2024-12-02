//
// Created by Olazs on 2024. 12. 03..
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VECTOR_SIZE 16

// Függvény a bináris paritás meghatározásához (1-es bitek számának megszámolása)
int count_ones(int num) {
    int count = 0;
    while (num != 0) {
        if (num & 1) { // Ha az utolsó bit 1
            count++;
        }
        num >>= 1; // Jobbra shiftelés, hogy a következő bitet nézzük
    }
    return count;
}

int program5() {
    int vector[VECTOR_SIZE];
    int i, ones_count = 0;

    // Véletlenszám generálás inicializálása
    srand(time(NULL));

    // Az első 15 elem véletlenszerű feltöltése
    for (i = 0; i < VECTOR_SIZE - 1; i++) {
        vector[i] = rand() % 2; // 0 vagy 1 értékek
        printf("vector[%d] = %d\n", i, vector[i]);
        ones_count += vector[i]; // Az 1-es bitek számolása
    }

    // Az utolsó elem úgy legyen beállítva, hogy a paritás páros legyen
    if (ones_count % 2 == 0) {
        // Ha az eddigi 1-esek száma páros, akkor az utolsó elem legyen 0
        vector[VECTOR_SIZE - 1] = 0;
    } else {
        // Ha az eddigi 1-esek száma páratlan, akkor az utolsó elem legyen 1
        vector[VECTOR_SIZE - 1] = 1;
    }

    // Az utolsó elem kiírása
    printf("vector[%d] = %d\n", VECTOR_SIZE - 1, vector[VECTOR_SIZE - 1]);

    // Az összes elem kiírása
    printf("\nA végleges vektor:\n");
    for (i = 0; i < VECTOR_SIZE; i++) {
        printf("vector[%d] = %d\n", i, vector[i]);
    }

    return 0;
}
