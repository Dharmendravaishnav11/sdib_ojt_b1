#include<stdio.h>
int main ()
{
    int a = 30, b = 10, *p1, *p2, sum;
    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;
    printf ("Addition of two numbers = %d\n", sum);
    sum = *p1 - *p2;
    printf ("Subtraction of two numbers = %d\n", sum);
    return 0;
}