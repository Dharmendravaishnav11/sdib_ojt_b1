#include<stdio.h>
 int main()
 {
    int a=5, c=5;
   int *b=&a;


    printf(" the   address of this  variable  is %d\n",b);
    printf("%d\n",a);
    printf("%d\n",*b);
    return 0;
 }