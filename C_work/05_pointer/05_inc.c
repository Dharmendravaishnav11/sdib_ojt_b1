#include <stdio.h>
int main ()
{
    // Integer variable
    int a = 10, b=20;
    // Pointer to an integer
    int *ptr1, *ptr2;
    // Pointer stores the address of variable a
    ptr1 = &a;
    ptr2 = &b;
    printf ("Pointer ptr1 before Increment: ");
    printf ("%p \n", ptr1);
    // Incrementing pointer ptr1;
    ptr1++;
    printf ("Pointer ptr1 after Increment: ");
    printf ("%p \n\n", ptr1);
    printf ("Pointer ptr2 before Decrement: ");
    printf ("%p \n", ptr2);
    // Decrementing pointer ptr2;
    ptr2--;
    printf ("Pointer ptr2 after Decrement: ");
    printf ("%p \n\n", ptr2);
    return 0;
}