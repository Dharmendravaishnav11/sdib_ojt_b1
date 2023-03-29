#include<stdio.h>
int main ()
{
    int a;
    int *ptr;
    ptr = &a;
    a = 10;
    printf ("\n %p %p", &a, ptr);
    printf ("\n %d %d", a, *ptr);
    *ptr = 20;
    printf ("\n %u %u", &a, ptr);
    printf ("\n %d %d", a, *ptr);
    return 0;
}