#include <stdio.h>
int main ()
{
    do
    {
        printf ("I'm from outer do-while loop ");
        do
        {
            printf ("\nI'm from inner do-while loop ");
        }
        while (1 > 10);
    }
    while (2 > 10);
    return 0;
}