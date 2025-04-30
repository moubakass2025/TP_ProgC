#include <stdio.h>

#define TAILLE 5
#define TAILLE_NOM 30
#define TAILLE_ADRESSE 100

int main() {
    char noms[TAILLE][TAILLE_NOM] = {
        "Durand", "Lemoine", "Martin", "Nguyen", "Dubois"
    };

    char prenoms[TAILLE][TAILLE_NOM] = {
        "Alice", "Bruno", "Chloé", "David", "Emma"
    };

    char adresses[TAILLE][TAILLE_ADRESSE] = {
        "12 rue des Fleurs, Paris",
        "5 avenue Victor Hugo, Lyon",
        "8 boulevard Haussmann, Marseille",
        "32 chemin des Lilas, Toulouse",
        "21 rue du Stade, Nantes"
    };

    float notesProg[TAILLE] = {15.5, 13.0, 17.2, 12.5, 14.0};
    float notesSys[TAILLE]  = {16.0, 14.5, 15.5, 13.0, 18.0};

    printf("=== Informations des Étudiant.e.s ===\n\n");

    for (int i = 0; i < TAILLE; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom     : %s\n", noms[i]);
        printf("Prénom  : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation en C       : %.1f\n", notesProg[i]);
        printf("Note en Système d'exploitation   : %.1f\n", notesSys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
