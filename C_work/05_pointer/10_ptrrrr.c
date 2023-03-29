#include<stdio.h>
int main ()
{
    int i = 10;
    int *ptr;
    int **pptr;
    int ***ppptr;
    ptr = &i;
    pptr = &ptr;
    ppptr = &pptr;
    printf ("\n %d %d %d %d", i, *ptr, **pptr, ***ppptr);
    printf("%d\n",i,ptr,pptr,ppptr);
}