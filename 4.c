#include <stdio.h>

int program4() {
    int num1, num2;
    float average;
    FILE *file;

    // Két szám bekérése
    printf("Kérlek, add meg az első számot: \n");
    scanf("%d", &num1);
    printf("Kérlek, add meg a második számot: \n");
    scanf("%d", &num2);

    // A számtani közép kiszámítása
    average = (num1 + num2) / 2.0;  // Az osztás eredménye lebegőpontos szám lesz

    // Fájl megnyitása írásra, ha nem létezik, akkor létrehozza
    file = fopen("adat.txt", "w");

    // Ha a fájl sikeresen megnyílt
    if (file != NULL) {
        // A számtani közép kiírása a fájlba
        fprintf(file, "A két szám számtani közepe: %.2f\n", average);

        // A fájl bezárása
        fclose(file);

        printf("A számtani közép sikeresen kiírva az adat.txt fájlba.\n");
    } else {
        // Ha nem sikerül megnyitni a fájlt
        printf("A fájl megnyitása sikertelen.\n");
    }

    return 0;
}
