#include <stdio.h>

int main() {
    // Types caractères
    printf("Taille de char           : %zu octet(s)\n", sizeof(char));
    printf("Taille de signed char    : %zu octet(s)\n", sizeof(signed char));
    printf("Taille de unsigned char  : %zu octet(s)\n\n", sizeof(unsigned char));

    // Types entiers courts
    printf("Taille de short          : %zu octet(s)\n", sizeof(short));
    printf("Taille de signed short   : %zu octet(s)\n", sizeof(signed short));
    printf("Taille de unsigned short : %zu octet(s)\n\n", sizeof(unsigned short));

    // Types entiers
    printf("Taille de int            : %zu octet(s)\n", sizeof(int));
    printf("Taille de signed int     : %zu octet(s)\n", sizeof(signed int));
    printf("Taille de unsigned int   : %zu octet(s)\n\n", sizeof(unsigned int));

    // Types long
    printf("Taille de long int       : %zu octet(s)\n", sizeof(long int));
    printf("Taille de signed long    : %zu octet(s)\n", sizeof(signed long));
    printf("Taille de unsigned long  : %zu octet(s)\n\n", sizeof(unsigned long));

    // Types long long
    printf("Taille de long long int       : %zu octet(s)\n", sizeof(long long int));
    printf("Taille de signed long long    : %zu octet(s)\n", sizeof(signed long long));
    printf("Taille de unsigned long long  : %zu octet(s)\n\n", sizeof(unsigned long long));

    // Types à virgule flottante
    printf("Taille de float          : %zu octet(s)\n", sizeof(float));
    printf("Taille de double         : %zu octet(s)\n", sizeof(double));
    printf("Taille de long double    : %zu octet(s)\n", sizeof(long double));

    return 0;
}
