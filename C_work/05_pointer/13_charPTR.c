#include<stdio.h>
#include<string.h>
int main ()
{
    char str="Heloo";
    char *ptr;
    printf ("enter a character:\n");
    gets (str);
    puts (str);
    ptr = str;
    printf ("name = %c", *ptr);
}