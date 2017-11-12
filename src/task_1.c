#include <stdio.h>

int main() {
    unsigned u;
    unsigned char uc;
    int i;
    float f;
    unsigned short us;
    long double ld;
    double d;
    short s;
    unsigned int a = (u - us * i) * s;
    float b = (uc + d) * ld ? f : us;
    long double c = (3.f + 3) / (2.5l - s * 3.14);
    int e = uc - '0' + (signed char)'1';
    unsigned int h = (1 - 2) + 5 + (unsigned)i;
}