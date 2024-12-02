#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_number, random_number, attempts = 0;

    // Véletlenszerű számok generálásához szükséges inicializálás
    srand(time(NULL));

    // Felhasználói bemenet bekérése, amíg érvényes számot nem ad meg
    do {
        printf("Adj meg egy 10-nél kisebb pozitív egész számot (0-9): ");
        scanf("%d", &user_number);

        // Ellenőrizzük, hogy a szám a megfelelő tartományban van-e
        if (user_number < 0 || user_number >= 10) {
            printf("A megadott szám nem érvényes! A számnak 0 és 9 között kell lennie.\n");
        }
    } while (user_number < 0 || user_number >= 10);

    // Véletlenszerű számok generálása, amíg meg nem találjuk a keresett számot
    do {
        random_number = rand() % 101; // 0 és 100 közötti véletlenszám
        attempts++; // Próbálkozások számolása
    } while (random_number != user_number);

    // Eredmény kiírása
    printf("A keresett számot a %d. próbálkozásra találtuk meg: %d\n", attempts, random_number);

    return 0;
}


