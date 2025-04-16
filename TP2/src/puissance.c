#include <stdio.h>

int main() {
    int a = 2; // base
    int b = 3; // exposant
    int resultat = 1;

    // Cas où l'exposant est négatif (optionnel à gérer selon votre besoin)
    if (b < 0) {
        printf("L'exposant ne peut pas être négatif dans ce programme.\n");
        return 1;
    }

    // Calcul de la puissance
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d est : %d\n", a, b, resultat);

    return 0;
}
