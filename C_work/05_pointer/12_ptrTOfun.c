#include<stdio.h>
 void sallerytotle(int *var , int b)
    {
        *var = *var + b;
    }
  int main()
  {
      int sallery=0;
      int bonous = 0;
      printf( " enter  the ammount od total sallery \n");
      scanf("%d", &sallery);
      printf( " enter the how  much bonous you want to give\n");
      scanf(" %d", & bonous);
      sallerytotle ( &sallery , bonous);
      printf(" aftre addition of the bonous your sallery is %d\n", sallery);
       return 0;
  }