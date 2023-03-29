#include<stdio.h>
void main ()
{
    int a,b;
    int *ptr = NULL;
    if (ptr == 0)
    {
        ptr = &a;
        a = 100;
    }
    if (ptr == (int *) 0)
    {
        ptr = &b;
        b = 200;
    }
    printf ("value of *ptr: %d ", *ptr);
}