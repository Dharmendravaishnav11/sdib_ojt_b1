#include <stdio.h>
int add (int a, int b)
{
    int c;
    c = a + b;
    return (c);
}
int main ()
{
    int x, y;
    x = 10;
    y = 5;
    int z = add (x, y);
    printf ("sum is %d", z);
}