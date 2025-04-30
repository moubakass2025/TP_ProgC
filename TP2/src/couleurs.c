#include <stdio.h>
#include <stdint.h>  // Pour uint8_t

// Définition de la structure Couleur RGBA
struct Couleur {
    uint8_t rouge;
    uint8_t vert;
    uint8_t bleu;
    uint8_t alpha;
};

int main() {
    // Tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x00, 0x00, 0x00, 0x00},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xaa, 0xbb, 0xcc, 0x80},
        {0x10, 0x20, 0x30, 0x40},
        {0x80, 0x80, 0x80, 0xff},
        {0xff, 0xff, 0xff, 0xff}
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("  Rouge : %u\n", couleurs[i].rouge);
        printf("  Vert  : %u\n", couleurs[i].vert);
        printf("  Bleu  : %u\n", couleurs[i].bleu);
        printf("  Alpha : %u\n", couleurs[i].alpha);
        printf("--------------------------\n");
    }

    return 0;
}
