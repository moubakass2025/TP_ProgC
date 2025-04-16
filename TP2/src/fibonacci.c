#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, temp;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un entier positif.\n");
        return 1;
    }

    printf("Les %d premiers termes de la suite de Fibonacci sont :\n", n);

    for (i = 0; i < n; i++) {
        printf("%d", a);
        if (i < n - 1) {
            printf(", ");
        }

        temp = a + b;
        a = b;
        b = temp;
    }

    printf("\n");
    return 0;
}

