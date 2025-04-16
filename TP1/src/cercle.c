#include <stdio.h>

int main() {
    // Déclaration et initialisation du rayon
    double rayon = 5.0;  // Exemple de rayon
    double pi = 3.14159;
    
    // Calcul de l'aire et du périmètre
    double aire = pi * rayon * rayon;
    double perimetre = 2 * pi * rayon;

    // Affichage des résultats
    printf("Pour un cercle de rayon %.2f :\n", rayon);
    printf("Aire = %.2f\n", aire);
    printf("Périmètre = %.2f\n", perimetre);

    return 0;
}
