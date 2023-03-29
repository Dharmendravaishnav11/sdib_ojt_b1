#include <stdio.h>
int main()
{
    int *ptr;
    ptr = (int *) malloc (5 * sizeof (int));
    if (ptr == NULL)
    {
        printf ("Memory is not allocated");
    }
    else
    {
        printf ("Memory is allocated");
    }
    return 0;
}