// ConsoleApplication1.c : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

void main()
{
    int a, b, c, max;
    printf("请输入 a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("最大的数：%d\n", max);

    
}



