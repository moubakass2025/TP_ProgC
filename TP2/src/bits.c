#include <stdio.h>

int main() {
    unsigned int d = 0x00F00008;  // Exemple de valeur ; vous pouvez la modifier pour tester

    // En C, les bits sont généralement comptés de droite à gauche (bit 0 à bit 31 pour un int 32 bits)
    // Donc le 4e bit de gauche est le bit 28 (31 - 3)
    // et le 20e bit de gauche est le bit 12 (31 - 19)

    int bit4 = (d >> (31 - 3)) & 1;   // 4e bit de gauche = bit 28
    int bit20 = (d >> (31 - 19)) & 1; // 20e bit de gauche = bit 12

    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
