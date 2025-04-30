#include <stdio.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copie[100];
    char concat[200];

    // 1. Calcul de la longueur de str1 et str2
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }

    printf("Longueur de str1 : %d\n", len1);
    printf("Longueur de str2 : %d\n", len2);

    // 2. Copier str1 dans copie
    int i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';  // Fin de chaîne
    printf("Copie de str1 : %s\n", copie);

    // 3. Concaténer str1 et str2 dans concat
    i = 0;
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0';  // Fin de chaîne
    printf("Chaîne concaténée : %s\n", concat);

    return 0;
}
