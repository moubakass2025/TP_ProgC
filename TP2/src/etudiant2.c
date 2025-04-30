#include <stdio.h>
#include <string.h>

#define TAILLE 5
#define TAILLE_NOM 30
#define TAILLE_ADRESSE 100

// Définition de la structure Étudiant
struct Etudiant {
    char nom[TAILLE_NOM];
    char prenom[TAILLE_NOM];
    char adresse[TAILLE_ADRESSE];
    float note1;  // Programmation en C
    float note2;  // Système d'exploitation
};

int main() {
    struct Etudiant etudiants[TAILLE];

    // Initialisation des données avec strcpy
    strcpy(etudiants[0].nom, "Durand");
    strcpy(etudiants[0].prenom, "Alice");
    strcpy(etudiants[0].adresse, "12 rue des Fleurs, Paris");
    etudiants[0].note1 = 15.5;
    etudiants[0].note2 = 16.0;

    strcpy(etudiants[1].nom, "Lemoine");
    strcpy(etudiants[1].prenom, "Bruno");
    strcpy(etudiants[1].adresse, "5 avenue Victor Hugo, Lyon");
    etudiants[1].note1 = 13.0;
    etudiants[1].note2 = 14.5;

    strcpy(etudiants[2].nom, "Martin");
    strcpy(etudiants[2].prenom, "Chloé");
    strcpy(etudiants[2].adresse, "8 boulevard Haussmann, Marseille");
    etudiants[2].note1 = 17.2;
    etudiants[2].note2 = 15.5;

    strcpy(etudiants[3].nom, "Nguyen");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "32 chemin des Lilas, Toulouse");
    etudiants[3].note1 = 12.5;
    etudiants[3].note2 = 13.0;

    strcpy(etudiants[4].nom, "Dubois");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "21 rue du Stade, Nantes");
    etudiants[4].note1 = 14.0;
    etudiants[4].note2 = 18.0;

    // Affichage des informations
    printf("=== Informations des Étudiant.e.s ===\n\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom     : %s\n", etudiants[i].nom);
        printf("Prénom  : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 (Programmation) : %.1f\n", etudiants[i].note1);
        printf("Note 2 (Système)       : %.1f\n", etudiants[i].note2);
        printf("-----------------------------\n");
    }

    return 0;
}
