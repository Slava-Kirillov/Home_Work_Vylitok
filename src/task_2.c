#include <stdio.h>

void main(){
    int a,b,c,d,e;
    a = 3;
    b = 14;
    c = 9;
    d = 17;
    e = -4;
    int res1 = b / a / c;
    int res2 = d / a % c;
    int res3 = c % d - e;
    int res4 = -e % a + b / a * -5 + 5;
//    res5 = sizeof (int) (unsigned int) (-1);
    printf("%d\n", res1);
    printf("%d\n", res2);
    printf("%d\n", res3);
    printf("%d\n", res4);
}