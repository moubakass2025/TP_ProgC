#include <stdio.h>

int main() {
    int compteur = 5; // Modifier ici pour tester

    if (compteur >= 10) {
        printf("La valeur du compteur doit être strictement inférieure à 10.\n");
        return 1;
    }

    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
