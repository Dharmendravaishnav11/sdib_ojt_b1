#include<stdio.h>
   int main()
   {
    int x,y,z;
    printf("enter the three no ");
    scanf(" %d %d %d", &x, &y, &z);
    if(x>y && x>z)
     {
        printf(" the largest value is x=%d", x);

     }
     if (y>x && y>z)
     {
        printf(" the larges no is y= %d", y);
     }
     if(z>x && z>y)
     {
        printf("the  large is z= %d",z);

     }
      return 0;
   }