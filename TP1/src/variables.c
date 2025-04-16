#include <stdio.h>

int main() {
    // Type char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // Type short
    short s = -12345;
    signed short ss = -12345;
    unsigned short us = 54321;

    // Type int
    int i = -100000;
    signed int si = -100000;
    unsigned int ui = 100000;

    // Type long int
    long int li = -1000000L;
    signed long sli = -1000000L;
    unsigned long uli = 1000000UL;

    // Type long long int
    long long int lli = -10000000000LL;
    signed long long slli = -10000000000LL;
    unsigned long long ulli = 10000000000ULL;

    // Types flottants
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238L;

    // Affichage
    printf("char               : %c\n", c);
    printf("signed char        : %d\n", sc);
    printf("unsigned char      : %u\n\n", uc);

    printf("short              : %d\n", s);
    printf("signed short       : %d\n", ss);
    printf("unsigned short     : %u\n\n", us);

    printf("int                : %d\n", i);
    printf("signed int         : %d\n", si);
    printf("unsigned int       : %u\n\n", ui);

    printf("long int           : %ld\n", li);
    printf("signed long        : %ld\n", sli);
    printf("unsigned long      : %lu\n\n", uli);

    printf("long long int      : %lld\n", lli);
    printf("signed long long   : %lld\n", slli);
    printf("unsigned long long : %llu\n\n", ulli);

    printf("float              : %.2f\n", f);
    printf("double             : %.10f\n", d);
    printf("long double        : %.15Lf\n", ld);

    return 0;
}
