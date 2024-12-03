#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

// Prímszám ellenőrzése
bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[SIZE] = {202, 83, 48, 19, 59, 8, 16, 28, 83, 19}; // Példa tömb
    int prime_count = 0;
    int divisible_by_8_count = 0;

    // A számok előfordulásának számlálása
    int frequency[1001] = {0};  // Mivel a számok 0 és 1000 között vannak

    // A tömb elemeinek feldolgozása
    for (int i = 0; i < SIZE; i++) {
        int num = arr[i];

        // Prímszámok számolása
        if (is_prime(num)) {
            prime_count++;
        }

        // 8-al osztható számok számolása
        if (num % 8 == 0) {
            divisible_by_8_count++;
        }

        // Előfordulások számolása
        frequency[num]++;
    }

    // Leggyakrabban előforduló számok keresése
    int max_frequency = 0;
    printf("\nA leggyakrabban előforduló számok: ");
    for (int i = 0; i <= 1000; i++) {
        if (frequency[i] > max_frequency) {
            max_frequency = frequency[i];
        }
    }
    for (int i = 0; i <= 1000; i++) {
        if (frequency[i] == max_frequency) {
            printf("%d ", i);
        }
    }

    // Eredmények kiírása
    printf("\n\nA tömbben szereplő prímszámok száma: %d", prime_count);
    printf("\nA tömbben szereplő 8-al osztható számok száma: %d\n", divisible_by_8_count);

    return 0;
}