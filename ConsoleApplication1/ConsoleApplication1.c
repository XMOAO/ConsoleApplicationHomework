// ConsoleApplication1.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void main()
{
    int a, b;
    float d, e;
    char c1, c2;
    long f, g;
    double m, n;
    unsigned int x, y;

    a = 65; b = 97;
    c1 = 'a'; c2 = 'b';
    d = 3.145; e = -6.874;
    f = 10000; g = -20000;
    m = 3141.592627; n = 0.123456789;
    x = 9527; y = 40000;
    printf("a=%c,b=%c\n c1=%d,c2=%c \n d=%6.2f,e=%6.2f\n ", a, b, c1, c2, d, e);
    printf("f=%ld,g=%ld\n m=%15.6f,n=%15.12f \n x=%u,y=%u\n ", f, g, m, n, x, y);


}



