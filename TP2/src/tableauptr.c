#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tabInt[TAILLE];
    float tabFloat[TAILLE];

    int *pInt;
    float *pFloat;

    srand(time(NULL)); // initialisation de la graine

    // Remplissage des tableaux avec des valeurs aléatoires
    for (pInt = tabInt; pInt < tabInt + TAILLE; pInt++) {
        *pInt = rand() % 100 + 1;
    }

    for (pFloat = tabFloat; pFloat < tabFloat + TAILLE; pFloat++) {
        *pFloat = ((float)(rand() % 1000)) / 100.0f; // valeurs entre 0.00 et 9.99
    }

    // Affichage avant la multiplication
    printf("Tableau d'entiers avant multiplication :\n");
    for (pInt = tabInt; pInt < tabInt + TAILLE; pInt++) {
        printf("%d ", *pInt);
    }

    printf("\nTableau de floats avant multiplication :\n");
    for (pFloat = tabFloat; pFloat < tabFloat + TAILLE; pFloat++) {
        printf("%.2f ", *pFloat);
    }

    // Multiplication par 3 pour les indices pairs (avec pointeurs)
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(tabInt + i) *= 3;
            *(tabFloat + i) *= 3;
        }
    }

    // Affichage après la multiplication
    printf("\n\nTableau d'entiers après multiplication :\n");
    for (pInt = tabInt; pInt < tabInt + TAILLE; pInt++) {
        printf("%d ", *pInt);
    }

    printf("\nTableau de floats après multiplication :\n");
    for (pFloat = tabFloat; pFloat < tabFloat + TAILLE; pFloat++) {
        printf("%.2f ", *pFloat);
    }

    printf("\n");
    return 0;
}
