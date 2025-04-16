#include <stdio.h>

void afficherBinaire(int n) {
    int taille = sizeof(int) * 8; // 32 bits sur la plupart des systèmes

    int bitTrouvé = 0; // Pour ignorer les zéros non significatifs
    for (int i = taille - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        if (bit == 1) {
            bitTrouvé = 1;
        }
        if (bitTrouvé || i == 0) { // Afficher au moins un zéro pour le cas n = 0
            printf("%d", bit);
        }
    }
    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Décimal : %d -> Binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
