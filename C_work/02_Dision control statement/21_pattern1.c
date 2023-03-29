#include <stdio.h>
int main ()
{
    int i, n, in;
    printf ("ENTER  A NUMBER ");
    scanf ("%d", &n);
    i = n;
    while (i >= 1)
    {
      printf ("\n");
      in = i;
      while (in >= 1)
   {
     printf ("%d ", in);
     in = in - 1;
   }
      i = i - 1;
    }
    return 0;
}