//
// Created by Olazs on 2024. 12. 02..
//
#include <stdio.h>

int program3() {
    FILE *file;
    int num;
    char filename[256];

    // Fájl megnyitás próbálkozása
    while (1) {
        // Kérjünk be egy fájlnevet
        printf("Add meg a fájl nevét: ");
        scanf("%s", filename);

        // Megpróbáljuk megnyitni a fájlt
        file = fopen(filename, "r");

        // Ha a fájl sikeresen megnyílt
        if (file != NULL) {
            break;  // Kilépünk a ciklusból
        } else {
            printf("A fájlt nem sikerült megnyitni: %s. Kérlek próbálj új fájlt.\n", filename);
        }
    }

    printf("A 3-mal osztható számok:\n");

    // Soronként olvassuk be a számokat
    while (fscanf(file, "%d", &num) != EOF) {
        if (num % 3 == 0) {
            printf("%d ", num);  // Ha osztható 3-mal, kiírjuk
        }
    }

    // A fájl bezárása
    fclose(file);

    return 0;
}
