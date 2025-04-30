#include <stdio.h>
#include <stdint.h>

int main() {
    // Déclaration des variables de types de base
    char c = 'A';
    short s = 123;
    int i = 1024;
    long int li = 100000;
    long long int lli = 1234567890123;
    float f = 2.5f;
    double d = 3.14159;
    long double ld = 2.718281828459;

    // Pointeurs associés
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Avant manipulation
    printf("Avant la manipulation :\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur : %08lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur : %016llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, *(unsigned int*)(void*)pf);
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, *(unsigned long long*)(void*)pd);
    printf("Adresse de ld : %p, Valeur : ");

    // Impression octet par octet du long double
    unsigned char *bytes = (unsigned char*)pld;
    for (int j = 0; j < sizeof(long double); j++) {
        printf("%02x", bytes[j]);
    }
    printf("\n");

    // Manipulation via pointeurs
    *pc = 'Z';
    *ps = 321;
    *pi = 2048;
    *pli = 200000;
    *plli = 987654321098;
    *pf = 1.0f;
    *pd = 2.71828;
    *pld = 3.141592653589;

    // Après manipulation
    printf("\nAprès la manipulation :\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s  : %p, Valeur : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur : %08lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur : %016llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, *(unsigned int*)(void*)pf);
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, *(unsigned long long*)(void*)pd);
    printf("Adresse de ld : %p, Valeur : ");
    bytes = (unsigned char*)pld;
    for (int j = 0; j < sizeof(long double); j++) {
        printf("%02x", bytes[j]);
    }
    printf("\n");

    return 0;
}
