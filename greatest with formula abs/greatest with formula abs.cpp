#include<stdio.h>
#include<cstdio>
#include<cstdlib>
int main()
{
    int a, b, c, d;
    scanf_s("%d %d %d", &a, &b, &c);
    d = (a + b + abs(a - b)) / 2;
    d = (d + c + abs(d - c)) / 2;
    printf("%d is the largest number\n", d);
    return 0;
}