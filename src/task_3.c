#include <stdio.h>
char str[ ] = "TTTRUMEPYAM1\1\11W\1AYYAM1";

void main()
{ int i, c;
    for ( i = 2; ( c = str [ i ] ) != '\0'; i++) {
        switch (c) {
            case 'a': putchar('i'); continue;
            case '1': break;
            case 1: while((c =str[++ i ] ) != '\1' && c!= '\0');
            case 9: putchar('P');
            case 'E': case 'Y': continue;
            default: putchar(c); continue; }
        putchar(' '); }
    putchar('\n');
}

