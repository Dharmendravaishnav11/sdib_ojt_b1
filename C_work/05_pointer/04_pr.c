#include<stdio.h>
int main ()
{
    int a, b;
    char *ptr;
    ptr = &a;
    a = 543;
    b = *ptr;
    printf ("%d %d %d", a, b, *ptr);
    *ptr = 255;
    printf ("\n%d %d %d ", a, b, *ptr);
    return 0;
}